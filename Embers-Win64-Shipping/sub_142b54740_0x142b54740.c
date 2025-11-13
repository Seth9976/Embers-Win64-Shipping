// 函数: sub_142b54740
// 地址: 0x142b54740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double* rbx = arg1

if (arg1[0x10].b != 0)
    return &arg1[0xe]

sub_142b54a40(arg1)

if (boost::math::detail::isnan_impl<long double>(rbx[4]) != 0)
    rbx[4] = (*rbx - -210866760000000.0) / 86400000.0

uint128_t zmm13
zmm13.q = rbx[4] - 2447891.5
uint128_t zmm12 = 0x401921fb54442d18
uint128_t zmm11
zmm11.q = zmm13.q f* 0.22997150421858628
zmm11.q = zmm11.q f+ 5.5562844367500208
zmm11.q = zmm11.q f- sub_142a4b9b0(zmm11.q f/ zmm12.q) f* zmm12.q
uint128_t zmm7
zmm7.q = zmm11.q f- zmm13.q * 0.0019443683452210151
zmm7.q = zmm7.q f- 0.63425980602467247
zmm7.q = zmm7.q f- sub_142a4b9b0(zmm7.q f/ zmm12.q) f* zmm12.q
double zmm0_2 = zmm11.q - rbx[6]
uint128_t zmm9
zmm9.q = sin(zmm0_2 + zmm0_2 f- zmm7.q).q f* 0.022233749341155764
double zmm0_4 = sin(rbx[7])
double zmm8 = zmm0_4 * 0.0032428217502054641
uint128_t zmm6
zmm6.q = zmm9.q f- zmm8
zmm6.q = zmm6.q f- zmm0_4 * 0.00645771823237902
zmm6.q = zmm6.q f+ zmm7.q
rbx[0xa] = zmm6.q
zmm7.q = sin(zmm6.q f+ zmm6.q).q f* 0.0037350045992678655
zmm9.q = zmm9.q f+ zmm11.q
zmm7.q = zmm7.q f+ sin(zmm6.q) * 0.10975677534091541 f+ zmm9.q - zmm8
double zmm0_6 = zmm7.q - rbx[6]
zmm13.q = zmm13.q f* 0.00092421990677182527
double zmm10 = 5.559050068029439 f- zmm13.q
rbx[8] = sin(zmm0_6 + zmm0_6) * 0.011489502465878671 f+ zmm7.q
zmm10 = zmm10 - sub_142a4b9b0(zmm10 f/ zmm12.q) f* zmm12.q - sin(rbx[7]) * 0.0027925268031909274
zmm7.q = rbx[8] - zmm10
zmm9 = sin(zmm7.q)
zmm6.q = cos(0x3fb6fd5e063b1d97).q f* zmm9.q
zmm6.q = atan2(zmm6.q, cos(zmm7.q)).q f+ zmm10
rbx[9] = zmm6.q
sub_142b54500(rbx, &rbx[0xe], zmm6, asin(sin(0x3fb6fd5e063b1d97) f* zmm9.q))
rbx[0x10].b = 1
return &rbx[0xe]
