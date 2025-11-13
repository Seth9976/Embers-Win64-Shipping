// 函数: sub_14190df10
// 地址: 0x14190df10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14193e1c0()
sub_141949800()
(*(arg1[0x2944] + 8))(&arg1[0x2944], zx.q(data_1439c7498), zx.q(data_143eff5c8))
(*(arg1[0x2a57] + 8))(&arg1[0x2a57], zx.q(data_1439c7498), zx.q(data_143eff5c8))
(*(arg1[0x29] + 8))(&arg1[0x29], zx.q(data_1439c7498), zx.q(data_143eff5c8))
int32_t var_3c = 0x7f7fffff
int32_t var_48 = 0x1010100
int64_t var_44 = 0
int64_t var_38 = 0
char var_30 = 0
void** rax_3 = sub_141944a30()

if (&arg1[0x114] != rax_3)
    int64_t* rbx_1 = arg1[0x114]
    arg1[0x114] = *rax_3
    *rax_3 = nullptr
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_5
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_5 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)

if (arg2 != 0)
    arg2[1].d -= 1
    
    if (arg2[1].d == 1)
        if (arg2[2].b != 0)
            (**arg2)(arg2, 1)
        else
            char rax_8
            
            if (data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_8 != 0)
                (**arg2)(arg2, 1)
            else
                bool z_2
                
                if (0 == *(arg2 + 0xc))
                    *(arg2 + 0xc) = 1
                    z_2 = true
                else
                    *(arg2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, arg2)

sub_14190dc90(&arg1[0x10a], 0x100000)
sub_14190da10(&arg1[0x10f], 0x100000)
int64_t rax_11 = 0

if (data_143eff5cc != 0)
    int32_t arg_8 = 0
    data_143effa50(0x9047, &arg_8)
    rax_11 = sx.q(arg_8) << 0xa

data_143eff658 = rax_11

if (rax_11 != 0)
    int32_t rcx_10 = data_143f0f208
    data_143eff660 = rax_11
    
    if (rcx_10 s> 0)
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_10)).d f* 9.53674295e-09f
        zmm1_1.d = zmm1_1.d f* float.s(rax_11)
        data_143f0f200 = sx.q(int.d(zmm1_1.d)) << 0x14

data_143effa18()
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 7)
int32_t rax_14 = var_50 + 7
var_50 = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"OpenGL", 0xe)
sub_142064b30(data_143f426f8, &var_58)
int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

data_143f02bb8 = &arg1[3]
data_143f02bc0 = &arg1[3]
data_143f02d88 = (*(*arg1 + 0x468))(arg1)
int64_t result = sub_1419a3ff0()
data_143f0f19c = 1
return result
