// 函数: sub_14203f230
// 地址: 0x14203f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void var_a8
sub_142427eb0(&var_a8)
int32_t var_7c
int32_t var_7c_1 = var_7c | 0x40
char var_7f
char var_7f_1 = var_7f | 4
int64_t* rbx = arg5
int64_t var_90 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)

if (rbx == 0)
    rbx = nullptr
else
    void* rax_3 = sub_14256a090()
    
    if (rax_3 == 0)
        rbx = nullptr
    else
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> rbx[7].d || *(rbx[6] + (rax_4 << 3)) != rax_3 + 0x30)
            rbx = nullptr

void* result = sub_1420efae0((*(*arg1 + 0x150))(arg1), rbx, arg3, arg4, &var_a8)

if (result != 0)
    if (arg2 == 1)
        *(result + 0x554) = arg2.b
    
    float var_78[0x4]
    sub_140ade170(arg4, &var_78)
    float zmm0_1[0x4] = var_78
    float zmm3_1[0x4] = *arg3
    float temp0_1[0x4] = _mm_unpacklo_ps((*arg3)[1], 0)
    float var_68[0x4] = zmm0_1
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3_1, (*arg3)[2][0].q)
    zmm0_1 = data_14399f670
    float var_58_1[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float var_48_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1[0].q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    sub_141dc3850(result, &var_68, 0, nullptr)

__security_check_cookie(rax_1 ^ &var_d8)
return result
