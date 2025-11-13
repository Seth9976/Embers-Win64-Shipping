// 函数: sub_140e231d0
// 地址: 0x140e231d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140b5b8a0(*(arg2 + 8), 0xa)
int32_t rcx
rcx.b = *(arg2 + 0xc) == 0

if ((rcx.b & rax) != 0)
    int32_t rcx_1
    rcx_1.b = *(arg2 + 0x20) == 0
    int128_t var_60
    int128_t* result
    int64_t* rbx_1
    
    if ((rcx_1.b & sub_140b5b8a0(*(arg2 + 0x1c), 0x3e)) != 0)
        int64_t* r9_1 = *(*arg3 + 8)
        int64_t* rcx_2 = r9_1[1]
        int32_t* rdx = *rcx_2
        int32_t var_68
        
        if (&rdx[1] u> rcx_2[1])
            int32_t* rdx_1 = &var_68
            
            if ((*(r9_1 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_1, rdx_1, arg4)
            else
                (*(*r9_1 + 0x150))(r9_1, rdx_1, 4)
        else
            var_68 = *rdx
            int64_t* rax_5 = r9_1[1]
            *rax_5 += 4
        
        uint128_t zmm0_1 = *sub_140acc920(&var_60, &var_68)
        arg1[1].b = 0
        *arg1 = zmm0_1
        void var_28
        
        if (&var_28 == arg1 + 0x18)
            result.b = 1
            return result
        
        zmm0_1 = *(arg1 + 0x18)
        *(arg1 + 0x18) = zx.o(0)
        rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
        goto label_140e232fd
    
    if ((*(arg2 + 0x20) == 0 & sub_140b5b8a0(*(arg2 + 0x1c), 0x41)) != 0)
        sub_140cd4cd0(arg3, &var_60, arg4)
        char var_40_1 = 0
        int128_t var_50 = var_60
        int128_t var_38_1 = zx.o(0)
        sub_140693390(arg1, &var_50)
        rbx_1 = var_38_1:8.q
    label_140e232fd:
        
        if (rbx_1 == 0)
            result.b = 1
            return result
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        result.b = 1
        return result

return 0
