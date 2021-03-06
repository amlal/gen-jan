// This file automagically generated, do not edit
#ifndef JIT_CODEGEN_VEC_FIXED_HPP
#define JIT_CODEGEN_VEC_FIXED_HPP 1

#include "jit.codegen.vec.hpp"

#define fixedLogic1(x) (((x) == 1) ? (fixedChar255) : 0)

template <unsigned N>
struct VecN<Fixed, N>{
public:
	Fixed v[N];
	
	VecN(int n, Fixed *vv) {
		for(int i=0; i < MIN(N, n); i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(Fixed *vv) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(const VecN &vn) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = vn.v[i];
		}
	}
	
	VecN(Fixed t) {
		for(unsigned int i=0; i < N; i++) {
			v[i] = t;
		}
	}
	
	VecN(const Vec4<Fixed> &v4) {
		const Fixed *vv = &(v4.x);
		for(unsigned int i=0; i < MIN(N, 4); i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(const Vec3<Fixed> &v3) {
		const Fixed *vv = &(v3.x);
		for(unsigned int i=0; i < MIN(N, 3); i++) {
			v[i] = vv[i];
		}
	}
	
	VecN(const Vec2<Fixed> &v2) {
		const Fixed *vv = &(v2.x);
		for(unsigned int i=0; i < MIN(N, 2); i++) {
			v[i] = vv[i];
		}
	}
	
	VecN() {
		for(unsigned int i=0; i < N; i++) {
			v[i] = 0;
		}
	}
	
	Fixed * ptr() {
		return v;
	}
	
	const Fixed * ptr() const {
		return v;
	}
	
	/*! Negation */
	const VecN operator- () const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = -v[i];
		}
		return res;
	}

	/*! Addition */
	const VecN operator+ (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+vn.v[i];
		}
		return res;
	}
	
	const VecN operator+ (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+s;
		}
		return res;
	}
	
	const VecN operator+ (long s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+IntToFixed(s);
		}
		return res;
	}
	
	const VecN operator+ (float s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+FloatToFixed(s);
		}
		return res;
	}
	
	const VecN operator+ (double s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]+DoubleToFixed(s);
		}
		return res;
	}
	
	/*! Subtraction */
	const VecN operator- (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-vn.v[i];
		}
		return res;
	}
	
	const VecN operator- (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-s;
		}
		return res;
	}
	
	const VecN operator- (long s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-IntToFixed(s);
		}
		return res;
	}
	
	const VecN operator- (float s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-FloatToFixed(s);
		}
		return res;
	}
	
	const VecN operator- (double s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]-DoubleToFixed(s);
		}
		return res;
	}
	
	/*! Multiplication */
	const VecN operator* (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixMul(v[i], vn.v[i]);
		}
		return res;
	}
	
	const VecN operator* (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixMul(v[i], s);
		}
		return res;
	}
	
	const VecN operator* (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixMul(v[i], s);
		}
		return res;
	}
	
	const VecN operator* (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixMul(v[i], s);
		}
		return res;
	}
	
	const VecN operator* (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixMul(v[i], s);
		}
		return res;
	}
	
	/*! Division */
	const VecN operator/ (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixDiv(v[i], vn.v[i]);
		}
		return res;
	}
	
	const VecN operator/ (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixDiv(v[i], s);
		}
		return res;
	}
	
	const VecN operator/ (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixDiv(v[i], s);
		}
		return res;
	}
	
	const VecN operator/ (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixDiv(v[i], s);
		}
		return res;
	}
	
	const VecN operator/ (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = FixDiv(v[i], s);
		}
		return res;
	}
	
	
	/*! Less Than */
	const VecN operator< (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<vn.v[i];
		}
		return res;
	}
	
	const VecN operator< (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<s;
		}
		return res;
	}
	
	const VecN operator< (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<s;
		}
		return res;
	}
	
	const VecN operator< (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<s;
		}
		return res;
	}
	
	const VecN operator< (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<s;
		}
		return res;
	}
	
	/*! Less Than Equal */
	const VecN operator<= (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<=vn.v[i];
		}
		return res;
	}
	
	const VecN operator<= (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<=s;
		}
		return res;
	}
	
	const VecN operator<= (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<=s;
		}
		return res;
	}
	
	const VecN operator<= (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<=s;
		}
		return res;
	}
	
	const VecN operator<= (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]<=s;
		}
		return res;
	}
	
	/*! Greater Than */
	const VecN operator> (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>vn.v[i];
		}
		return res;
	}
	
	const VecN operator> (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>s;
		}
		return res;
	}
	
	const VecN operator> (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>s;
		}
		return res;
	}
	
	const VecN operator> (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>s;
		}
		return res;
	}
	
	const VecN operator> (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>s;
		}
		return res;
	}
	
	/*! Greater Than Equal */
	const VecN operator>= (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>=vn.v[i];
		}
		return res;
	}
	
	const VecN operator>= (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>=s;
		}
		return res;
	}
	
	const VecN operator>= (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>=s;
		}
		return res;
	}
	
	const VecN operator>= (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>=s;
		}
		return res;
	}
	
	const VecN operator>= (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]>=s;
		}
		return res;
	}
	
	/*! Equal */
	const VecN operator== (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]==vn.v[i];
		}
		return res;
	}
	
	const VecN operator== (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]==s;
		}
		return res;
	}
	
	const VecN operator== (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]==s;
		}
		return res;
	}
	
	const VecN operator== (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]==s;
		}
		return res;
	}
	
	const VecN operator== (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]==s;
		}
		return res;
	}
	
	/*! Not Equal */
	const VecN operator!= (const VecN &vn) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]!=vn.v[i];
		}
		return res;
	}
	
	const VecN operator!= (Fixed s) const {
		VecN res;
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]!=s;
		}
		return res;
	}
	
	const VecN operator!= (long s_) const {
		VecN res;
		Fixed s = IntToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]!=s;
		}
		return res;
	}
	
	const VecN operator!= (float s_) const {
		VecN res;
		Fixed s = FloatToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]!=s;
		}
		return res;
	}
	
	const VecN operator!= (double s_) const {
		VecN res;
		Fixed s = DoubleToFixed(s_);
		for(unsigned int i=0; i < N; i++) {
			res.v[i] = v[i]!=s;
		}
		return res;
	}
};

template <unsigned N>
const VecN<Fixed, N> vec_from_long_array(t_jit_long n, t_jit_long *v) {
	VecN<Fixed, N> rv;
	Fixed *vv = rv.v;
	for(int i=0; i < MIN(n, N); i++) {
		vv[i] = IntToFixed(v[i]);
	}
	return rv;
}


/* Addition */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator+ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(x+v, y+v, z+v, w+v);
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator+ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(x+v, y+v, z+v, w+v);
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator+ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(x+v, y+v, z+v, w+v);
}

/* Subtraction */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator- (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(x-v, y-v, z-v, w-v);
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator- (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(x-v, y-v, z-v, w-v);
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator- (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(x-v, y-v, z-v, w-v);
}

/* Multiplication */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator* (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(FixMul(x, v.x), FixMul(y, v.y), FixMul(z, v.z), FixMul(w, v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator* (const Fixed v) const {
	return Vec4<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v), FixMul(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator* (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v), FixMul(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator* (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v), FixMul(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator* (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v), FixMul(w, v));
}

/* Division */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator/ (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(FixDiv(x, v.x), FixDiv(y, v.y), FixDiv(z, v.z), FixDiv(w, v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator/ (const Fixed v) const {
	return Vec4<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v), FixDiv(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator/ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v), FixDiv(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator/ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v), FixDiv(w, v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator/ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v), FixDiv(w, v));
}

/* Less Than */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator< (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x<v.x), fixedLogic1(y<v.y), fixedLogic1(z<v.z), fixedLogic1(w<v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator< (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v), fixedLogic1(w<v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator< (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v), fixedLogic1(w<v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator< (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v), fixedLogic1(w<v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator< (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v), fixedLogic1(w<v));
}

/* Less Than Equal */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator<= (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x<=v.x), fixedLogic1(y<=v.y), fixedLogic1(z<=v.z), fixedLogic1(w<=v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator<= (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v), fixedLogic1(w<=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator<= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v), fixedLogic1(w<=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator<= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v), fixedLogic1(w<=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator<= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v), fixedLogic1(w<=v));
}

/* Greater Than */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator> (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x>v.x), fixedLogic1(y>v.y), fixedLogic1(z>v.z), fixedLogic1(w>v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator> (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v), fixedLogic1(w>v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator> (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v), fixedLogic1(w>v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator> (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v), fixedLogic1(w>v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator> (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v), fixedLogic1(w>v));
}

/* Greater Than Equal */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator>= (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x>=v.x), fixedLogic1(y>=v.y), fixedLogic1(z>=v.z), fixedLogic1(w>=v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator>= (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v), fixedLogic1(w>=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator>= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v), fixedLogic1(w>=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator>= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v), fixedLogic1(w>=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator>= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v), fixedLogic1(w>=v));
}

/* Equal */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator== (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x==v.x), fixedLogic1(y==v.y), fixedLogic1(z==v.z), fixedLogic1(w==v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator== (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v), fixedLogic1(w==v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator== (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v), fixedLogic1(w==v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator== (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v), fixedLogic1(w==v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator== (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v), fixedLogic1(w==v));
}

/* Not Equal */
template <>
const Vec4<Fixed> Vec4<Fixed>::operator!= (const Vec4<Fixed> &v) const {
	return Vec4<Fixed>(fixedLogic1(x!=v.x), fixedLogic1(y!=v.y), fixedLogic1(z!=v.z), fixedLogic1(w!=v.w));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator!= (const Fixed v) const {
	return Vec4<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v), fixedLogic1(w!=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator!= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v), fixedLogic1(w!=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator!= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v), fixedLogic1(w!=v));
}
template <>
const Vec4<Fixed> Vec4<Fixed>::operator!= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec4<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v), fixedLogic1(w!=v));
}


/* Addition */
template <>
const Vec4<Fixed> operator+ (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(s+v.x, s+v.y, s+v.z, s+v.w);
}
template <>
const Vec4<Fixed> operator+ (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(s+v.x, s+v.y, s+v.z, s+v.w);
}
template <>
const Vec4<Fixed> operator+ (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(s+v.x, s+v.y, s+v.z, s+v.w);
}

/* Subtraction */
template <>
const Vec4<Fixed> operator- (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(s-v.x, s-v.y, s-v.z, s-v.w);
}
template <>
const Vec4<Fixed> operator- (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(s-v.x, s-v.y, s-v.z, s-v.w);
}
template <>
const Vec4<Fixed> operator- (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(s-v.x, s-v.y, s-v.z, s-v.w);
}


/* Multiplication */
template <>
const Vec4<Fixed> operator* (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z), FixMul(s, v.w));
}
template <>
const Vec4<Fixed> operator* (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z), FixMul(s, v.w));
}
template <>
const Vec4<Fixed> operator* (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z), FixMul(s, v.w));
}
template <>
const Vec4<Fixed> operator* (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z), FixMul(s, v.w));
}


/* Division */
template <>
const Vec4<Fixed> operator/ (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z), FixDiv(s, v.w));
}
template <>
const Vec4<Fixed> operator/ (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z), FixDiv(s, v.w));
}
template <>
const Vec4<Fixed> operator/ (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z), FixDiv(s, v.w));
}
template <>
const Vec4<Fixed> operator/ (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z), FixDiv(s, v.w));
}

/* Less Than */
template <>
const Vec4<Fixed> operator< (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z), fixedLogic1(s<v.w));
}
template <>
const Vec4<Fixed> operator< (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z), fixedLogic1(s<v.w));
}
template <>
const Vec4<Fixed> operator< (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z), fixedLogic1(s<v.w));
}
template <>
const Vec4<Fixed> operator< (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z), fixedLogic1(s<v.w));
}

/* Less Than Equal */
template <>
const Vec4<Fixed> operator<= (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z), fixedLogic1(s<=v.w));
}
template <>
const Vec4<Fixed> operator<= (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z), fixedLogic1(s<=v.w));
}
template <>
const Vec4<Fixed> operator<= (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z), fixedLogic1(s<=v.w));
}
template <>
const Vec4<Fixed> operator<= (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z), fixedLogic1(s<=v.w));
}

/* Greater Than */
template <>
const Vec4<Fixed> operator> (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z), fixedLogic1(s>v.w));
}
template <>
const Vec4<Fixed> operator> (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z), fixedLogic1(s>v.w));
}
template <>
const Vec4<Fixed> operator> (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z), fixedLogic1(s>v.w));
}
template <>
const Vec4<Fixed> operator> (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z), fixedLogic1(s>v.w));
}

/* Greater Than Equal */
template <>
const Vec4<Fixed> operator>= (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z), fixedLogic1(s>=v.w));
}
template <>
const Vec4<Fixed> operator>= (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z), fixedLogic1(s>=v.w));
}
template <>
const Vec4<Fixed> operator>= (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z), fixedLogic1(s>=v.w));
}
template <>
const Vec4<Fixed> operator>= (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z), fixedLogic1(s>=v.w));
}

/* Equal */
template <>
const Vec4<Fixed> operator== (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z), fixedLogic1(s==v.w));
}
template <>
const Vec4<Fixed> operator== (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z), fixedLogic1(s==v.w));
}
template <>
const Vec4<Fixed> operator== (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z), fixedLogic1(s==v.w));
}
template <>
const Vec4<Fixed> operator== (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z), fixedLogic1(s==v.w));
}

/* Not Equal */
template <>
const Vec4<Fixed> operator!= (const Fixed s, const Vec4<Fixed> &v) {
	return Vec4<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z), fixedLogic1(s!=v.w));
}
template <>
const Vec4<Fixed> operator!= (const long s_, const Vec4<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z), fixedLogic1(s!=v.w));
}
template <>
const Vec4<Fixed> operator!= (const float s_, const Vec4<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z), fixedLogic1(s!=v.w));
}
template <>
const Vec4<Fixed> operator!= (const double s_, const Vec4<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec4<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z), fixedLogic1(s!=v.w));
}

template <>
const Vec4<Fixed> vec_from_long_array4(t_jit_long n, t_jit_long *v) {
	Vec4<Fixed> rv;
	Fixed *vv = &rv.x;
	for(int i=0; i < MIN(n, 4); i++) {
		vv[i] = IntToFixed(v[i]);
	}
	return rv;
}

/* Addition */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator+ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(x+v, y+v, z+v);
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator+ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(x+v, y+v, z+v);
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator+ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(x+v, y+v, z+v);
}

/* Subtraction */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator- (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(x-v, y-v, z-v);
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator- (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(x-v, y-v, z-v);
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator- (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(x-v, y-v, z-v);
}

/* Multiplication */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator* (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(FixMul(x, v.x), FixMul(y, v.y), FixMul(z, v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator* (const Fixed v) const {
	return Vec3<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator* (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator* (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator* (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(FixMul(x, v), FixMul(y, v), FixMul(z, v));
}

/* Division */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator/ (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(FixDiv(x, v.x), FixDiv(y, v.y), FixDiv(z, v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator/ (const Fixed v) const {
	return Vec3<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator/ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator/ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator/ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(FixDiv(x, v), FixDiv(y, v), FixDiv(z, v));
}

/* Less Than */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator< (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x<v.x), fixedLogic1(y<v.y), fixedLogic1(z<v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator< (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator< (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator< (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator< (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v), fixedLogic1(z<v));
}

/* Less Than Equal */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator<= (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x<=v.x), fixedLogic1(y<=v.y), fixedLogic1(z<=v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator<= (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator<= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator<= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator<= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v), fixedLogic1(z<=v));
}

/* Greater Than */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator> (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x>v.x), fixedLogic1(y>v.y), fixedLogic1(z>v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator> (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator> (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator> (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator> (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v), fixedLogic1(z>v));
}

/* Greater Than Equal */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator>= (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x>=v.x), fixedLogic1(y>=v.y), fixedLogic1(z>=v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator>= (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator>= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator>= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator>= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v), fixedLogic1(z>=v));
}

/* Equal */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator== (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x==v.x), fixedLogic1(y==v.y), fixedLogic1(z==v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator== (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator== (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator== (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator== (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v), fixedLogic1(z==v));
}

/* Not Equal */
template <>
const Vec3<Fixed> Vec3<Fixed>::operator!= (const Vec3<Fixed> &v) const {
	return Vec3<Fixed>(fixedLogic1(x!=v.x), fixedLogic1(y!=v.y), fixedLogic1(z!=v.z));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator!= (const Fixed v) const {
	return Vec3<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator!= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator!= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v));
}
template <>
const Vec3<Fixed> Vec3<Fixed>::operator!= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec3<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v), fixedLogic1(z!=v));
}


/* Addition */
template <>
const Vec3<Fixed> operator+ (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(s+v.x, s+v.y, s+v.z);
}
template <>
const Vec3<Fixed> operator+ (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(s+v.x, s+v.y, s+v.z);
}
template <>
const Vec3<Fixed> operator+ (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(s+v.x, s+v.y, s+v.z);
}

/* Subtraction */
template <>
const Vec3<Fixed> operator- (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(s-v.x, s-v.y, s-v.z);
}
template <>
const Vec3<Fixed> operator- (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(s-v.x, s-v.y, s-v.z);
}
template <>
const Vec3<Fixed> operator- (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(s-v.x, s-v.y, s-v.z);
}


/* Multiplication */
template <>
const Vec3<Fixed> operator* (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z));
}
template <>
const Vec3<Fixed> operator* (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z));
}
template <>
const Vec3<Fixed> operator* (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z));
}
template <>
const Vec3<Fixed> operator* (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(FixMul(s, v.x), FixMul(s, v.y), FixMul(s, v.z));
}


/* Division */
template <>
const Vec3<Fixed> operator/ (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z));
}
template <>
const Vec3<Fixed> operator/ (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z));
}
template <>
const Vec3<Fixed> operator/ (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z));
}
template <>
const Vec3<Fixed> operator/ (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y), FixDiv(s, v.z));
}

/* Less Than */
template <>
const Vec3<Fixed> operator< (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z));
}
template <>
const Vec3<Fixed> operator< (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z));
}
template <>
const Vec3<Fixed> operator< (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z));
}
template <>
const Vec3<Fixed> operator< (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y), fixedLogic1(s<v.z));
}

/* Less Than Equal */
template <>
const Vec3<Fixed> operator<= (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z));
}
template <>
const Vec3<Fixed> operator<= (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z));
}
template <>
const Vec3<Fixed> operator<= (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z));
}
template <>
const Vec3<Fixed> operator<= (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y), fixedLogic1(s<=v.z));
}

/* Greater Than */
template <>
const Vec3<Fixed> operator> (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z));
}
template <>
const Vec3<Fixed> operator> (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z));
}
template <>
const Vec3<Fixed> operator> (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z));
}
template <>
const Vec3<Fixed> operator> (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y), fixedLogic1(s>v.z));
}

/* Greater Than Equal */
template <>
const Vec3<Fixed> operator>= (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z));
}
template <>
const Vec3<Fixed> operator>= (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z));
}
template <>
const Vec3<Fixed> operator>= (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z));
}
template <>
const Vec3<Fixed> operator>= (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y), fixedLogic1(s>=v.z));
}

/* Equal */
template <>
const Vec3<Fixed> operator== (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z));
}
template <>
const Vec3<Fixed> operator== (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z));
}
template <>
const Vec3<Fixed> operator== (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z));
}
template <>
const Vec3<Fixed> operator== (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y), fixedLogic1(s==v.z));
}

/* Not Equal */
template <>
const Vec3<Fixed> operator!= (const Fixed s, const Vec3<Fixed> &v) {
	return Vec3<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z));
}
template <>
const Vec3<Fixed> operator!= (const long s_, const Vec3<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z));
}
template <>
const Vec3<Fixed> operator!= (const float s_, const Vec3<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z));
}
template <>
const Vec3<Fixed> operator!= (const double s_, const Vec3<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec3<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y), fixedLogic1(s!=v.z));
}

template <>
const Vec3<Fixed> vec_from_long_array3(t_jit_long n, t_jit_long *v) {
	Vec3<Fixed> rv;
	Fixed *vv = &rv.x;
	for(int i=0; i < MIN(n, 3); i++) {
		vv[i] = IntToFixed(v[i]);
	}
	return rv;
}

/* Addition */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator+ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(x+v, y+v);
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator+ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(x+v, y+v);
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator+ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(x+v, y+v);
}

/* Subtraction */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator- (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(x-v, y-v);
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator- (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(x-v, y-v);
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator- (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(x-v, y-v);
}

/* Multiplication */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator* (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(FixMul(x, v.x), FixMul(y, v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator* (const Fixed v) const {
	return Vec2<Fixed>(FixMul(x, v), FixMul(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator* (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(FixMul(x, v), FixMul(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator* (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(FixMul(x, v), FixMul(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator* (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(FixMul(x, v), FixMul(y, v));
}

/* Division */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator/ (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(FixDiv(x, v.x), FixDiv(y, v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator/ (const Fixed v) const {
	return Vec2<Fixed>(FixDiv(x, v), FixDiv(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator/ (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(FixDiv(x, v), FixDiv(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator/ (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(FixDiv(x, v), FixDiv(y, v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator/ (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(FixDiv(x, v), FixDiv(y, v));
}

/* Less Than */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator< (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x<v.x), fixedLogic1(y<v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator< (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator< (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator< (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator< (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<v), fixedLogic1(y<v));
}

/* Less Than Equal */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator<= (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x<=v.x), fixedLogic1(y<=v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator<= (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator<= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator<= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator<= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x<=v), fixedLogic1(y<=v));
}

/* Greater Than */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator> (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x>v.x), fixedLogic1(y>v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator> (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator> (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator> (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator> (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>v), fixedLogic1(y>v));
}

/* Greater Than Equal */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator>= (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x>=v.x), fixedLogic1(y>=v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator>= (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator>= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator>= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator>= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x>=v), fixedLogic1(y>=v));
}

/* Equal */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator== (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x==v.x), fixedLogic1(y==v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator== (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator== (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator== (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator== (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x==v), fixedLogic1(y==v));
}

/* Not Equal */
template <>
const Vec2<Fixed> Vec2<Fixed>::operator!= (const Vec2<Fixed> &v) const {
	return Vec2<Fixed>(fixedLogic1(x!=v.x), fixedLogic1(y!=v.y));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator!= (const Fixed v) const {
	return Vec2<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator!= (const long v_) const {
	Fixed v = IntToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator!= (const float v_) const {
	Fixed v = FloatToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v));
}
template <>
const Vec2<Fixed> Vec2<Fixed>::operator!= (const double v_) const {
	Fixed v = DoubleToFixed(v_);
	return Vec2<Fixed>(fixedLogic1(x!=v), fixedLogic1(y!=v));
}


/* Addition */
template <>
const Vec2<Fixed> operator+ (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(s+v.x, s+v.y);
}
template <>
const Vec2<Fixed> operator+ (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(s+v.x, s+v.y);
}
template <>
const Vec2<Fixed> operator+ (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(s+v.x, s+v.y);
}

/* Subtraction */
template <>
const Vec2<Fixed> operator- (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(s-v.x, s-v.y);
}
template <>
const Vec2<Fixed> operator- (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(s-v.x, s-v.y);
}
template <>
const Vec2<Fixed> operator- (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(s-v.x, s-v.y);
}


/* Multiplication */
template <>
const Vec2<Fixed> operator* (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(FixMul(s, v.x), FixMul(s, v.y));
}
template <>
const Vec2<Fixed> operator* (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(FixMul(s, v.x), FixMul(s, v.y));
}
template <>
const Vec2<Fixed> operator* (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(FixMul(s, v.x), FixMul(s, v.y));
}
template <>
const Vec2<Fixed> operator* (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(FixMul(s, v.x), FixMul(s, v.y));
}


/* Division */
template <>
const Vec2<Fixed> operator/ (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y));
}
template <>
const Vec2<Fixed> operator/ (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y));
}
template <>
const Vec2<Fixed> operator/ (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y));
}
template <>
const Vec2<Fixed> operator/ (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(FixDiv(s, v.x), FixDiv(s, v.y));
}

/* Less Than */
template <>
const Vec2<Fixed> operator< (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y));
}
template <>
const Vec2<Fixed> operator< (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y));
}
template <>
const Vec2<Fixed> operator< (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y));
}
template <>
const Vec2<Fixed> operator< (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<v.x), fixedLogic1(s<v.y));
}

/* Less Than Equal */
template <>
const Vec2<Fixed> operator<= (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y));
}
template <>
const Vec2<Fixed> operator<= (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y));
}
template <>
const Vec2<Fixed> operator<= (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y));
}
template <>
const Vec2<Fixed> operator<= (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s<=v.x), fixedLogic1(s<=v.y));
}

/* Greater Than */
template <>
const Vec2<Fixed> operator> (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y));
}
template <>
const Vec2<Fixed> operator> (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y));
}
template <>
const Vec2<Fixed> operator> (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y));
}
template <>
const Vec2<Fixed> operator> (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>v.x), fixedLogic1(s>v.y));
}

/* Greater Than Equal */
template <>
const Vec2<Fixed> operator>= (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y));
}
template <>
const Vec2<Fixed> operator>= (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y));
}
template <>
const Vec2<Fixed> operator>= (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y));
}
template <>
const Vec2<Fixed> operator>= (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s>=v.x), fixedLogic1(s>=v.y));
}

/* Equal */
template <>
const Vec2<Fixed> operator== (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y));
}
template <>
const Vec2<Fixed> operator== (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y));
}
template <>
const Vec2<Fixed> operator== (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y));
}
template <>
const Vec2<Fixed> operator== (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s==v.x), fixedLogic1(s==v.y));
}

/* Not Equal */
template <>
const Vec2<Fixed> operator!= (const Fixed s, const Vec2<Fixed> &v) {
	return Vec2<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y));
}
template <>
const Vec2<Fixed> operator!= (const long s_, const Vec2<Fixed> &v) {
	Fixed s = IntToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y));
}
template <>
const Vec2<Fixed> operator!= (const float s_, const Vec2<Fixed> &v) {
	Fixed s = FloatToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y));
}
template <>
const Vec2<Fixed> operator!= (const double s_, const Vec2<Fixed> &v) {
	Fixed s = DoubleToFixed(s_);
	return Vec2<Fixed>(fixedLogic1(s!=v.x), fixedLogic1(s!=v.y));
}

template <>
const Vec2<Fixed> vec_from_long_array2(t_jit_long n, t_jit_long *v) {
	Vec2<Fixed> rv;
	Fixed *vv = &rv.x;
	for(int i=0; i < MIN(n, 2); i++) {
		vv[i] = IntToFixed(v[i]);
	}
	return rv;
}


#endif // JIT_CODEGEN_VEC_FIXED_HPP

