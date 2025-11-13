// 函数: sub_14241e400
// 地址: 0x14241e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1668)
void var_1688
int64_t rax_1 = __security_cookie ^ &var_1688
void* rax_2 = *(arg1 + 8)
int64_t r14
r14.b = 0

if (*(rax_2 + 8) != 0 || *(rax_2 + 0x18) != 0 || *(rax_2 + 0x58) != 0 || *(rax_2 + 0x130) != 0
        || *(rax_2 + 0x48) != 0 || *(rax_2 + 0x28) s> 0)
    int64_t* r15_1 = *(arg4 + 0x58)
    r14.b = 1
    (*(*r15_1 + 0x20))(r15_1)
    int128_t zmm6
    zmm6.d = 1f f/ arg5
    *(*(*(arg1 + 8) + 0x238) + 0x45)
    int64_t r12
    
    if (sub_14128e090((*U"1111")[sx.q(*(arg4 + 0x90))]) == 0 || *(arg4 + 0x8d) == 0)
        r12.b = 0
    else
        r12.b = 1
    
    int64_t rdi
    rdi.b = *(arg4 + 0x60) != 0
    void var_1620
    int32_t rbx_1 = *((*(*r15_1 + 0x18))(r15_1, &var_1620) + 4)
    void var_1618
    int32_t* rax_10 = (*(*r15_1 + 0x18))(r15_1, &var_1618)
    uint128_t* rdx_3 = *(arg1 + 8) + 0x250
    int32_t var_1630_1 = *rax_10
    int32_t var_162c_1 = rbx_1
    int32_t rbx_2 = *(arg4 + 0x90)
    int64_t var_1638 = 0
    void var_1608
    int64_t* rax_11
    int32_t zmm6_1
    rax_11, zmm6_1 = sub_141e98ce0(&var_1608, rdx_3, &var_1638)
    sub_141e9a320(*(arg1 + 8), arg2, arg3, rbx_2, r12.b, rax_11, rdi.b, zmm6_1, 3)
    sub_1413c58e0(&var_1608)

if ((*(arg4 + 0x78) & 2) != 0)
    int64_t* rbx_3 = *(arg1 + 8)
    
    if (rbx_3 != 0)
        int64_t* rcx_9 = rbx_3[0x46]
        
        if (rcx_9 != 0)
            rcx_9[1].d -= 1
            
            if (rcx_9[1].d == 1)
                int64_t r8_2 = *rcx_9
                (*r8_2)(rcx_9, 1, r8_2)
        
        sub_141412c30(rbx_3)
        j_sub_140a74f90(rbx_3)
    
    *(arg1 + 8) = 0

__security_check_cookie(rax_1 ^ &var_1688)
return zx.q(r14.b)
