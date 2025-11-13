// 函数: sub_140a7e430
// 地址: 0x140a7e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm2 = 25.0
void* rcx = data_143ddb400
uint128_t zmm6 = zx.o(0)
double arg_10 = zmm2
int64_t arg_18 = (zx.o(0)).q
char result_1 = 0
uint128_t zmm1

if (rcx != 0)
    sub_140af3a30(rcx, u"Core.System", u"HangDuration", &arg_10, &data_143de5780)
    sub_140af3a30(data_143ddb400, u"Core.System", u"PresentHangDuration", &arg_18, &data_143de5780)
    zmm6 = sub_140af2fd0(data_143ddb400, Core.System", HangsAreFatal", &result_1, &data_143de5780)
    zmm2 = arg_10
    zmm1 = 0x4014000000000000
    
    if (not(zmm2 f<= zmm6.q) && not(zmm2 f>= zmm1.q))
        zmm2 = zmm1.q
    
    zmm6 = zx.o(arg_18)
    
    if (not(zmm6.q f<= 0.0) && not(zmm6.q f>= zmm1.q))
        zmm6 = zmm1

zmm1 = zx.o(*(arg1 + 0xd8))
char result = result_1
int64_t zmm0 = zmm1.q
zmm1.q = zmm1.q f* zmm6.q
*(arg1 + 0xe8) = result
*(arg1 + 0xc8) = zmm6.q
*(arg1 + 0xb8) = zmm2
*(arg1 + 0xc0) = zmm0 f* zmm2
*(arg1 + 0xd0) = zmm1.q
return result
