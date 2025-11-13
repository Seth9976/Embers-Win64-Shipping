// 函数: sub_141261e60
// 地址: 0x141261e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_48, 
    &data_143e8f9b0, 0)
void* r13 = var_48
void* rdi = nullptr

if (r13 != 0)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    void* var_40
    int64_t* rbx_1 = *(var_40 + 0x10)
    int64_t rdi_1 = rdx_1 << 3
    int64_t rax_3 = rbx_1[3]
    
    if (*(rdi_1 + rax_3) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_3 = rbx_1[3]
    
    rdi = *(rdi_1 + rax_3)

*(arg2 + 0x1b0) = rdi
sub_14198aa60(rdi)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_6[3]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_6[3]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rdi
void arg_10
sub_140b58260(&arg_10, u"PathCompaction", 1)
int64_t* rcx_11 = data_143f0f180
int64_t arg_8
(*(*rcx_11 + 0x98))(rcx_11, &arg_8, &arg_10)
sub_141297620(r13, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg3 + 0x15a0) - *(arg3 + 0x1598) + 7)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c) + 7)
sub_1419cd1c0(arg2, r13, ((temp0 & 7) + temp1) s>> 3, ((temp2 & 7) + temp3) s>> 3, 1)
sub_1412e4f40(r13, arg2, 0, 1, arg7, arg8, arg9, arg10, arg11, arg_8)
return sub_1405d1550(&arg_8)
