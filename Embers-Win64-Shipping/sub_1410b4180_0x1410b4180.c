// 函数: sub_1410b4180
// 地址: 0x1410b4180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)
int64_t* rcx = *(arg4 + 0x80)
int64_t arg_8 = 0
int64_t* rax_1 = (*(*rcx + 0x40))(rcx, zx.q(rbp.d), &arg_8)
uint64_t result = (*(*rax_1 + 0x1c0))(rax_1)
char r8_1

if (result.b != 0 || (*(arg4 + 0x9c) & 0x200000) != 0)
    result = sub_1419a51c0((*U"1111")[rbp])
    
    r8_1 = result.b == 0 ? 0 : 1
else
    r8_1 = 0

if (arg7 != 0)
    char rcx_2
    char rdx_1
    
    if (arg6 == 0)
        rcx_2 = 0
        rdx_1 = 0
    else
        char rax_3 = *(arg6 + 0x3f)
        rcx_2 = *(arg6 + 0x35) & 0xf8
        rdx_1 = (not.b(rax_3) & 1) | (rax_3 & 6)
    
    uint32_t rdx_2 = zx.d((rcx_2 | rdx_1) << 4)
    
    if (r8_1 == 0)
        result = data_1439b5388
        
        if ((*(arg2 + 0x10) & 2) != 0)
            result = data_1439b5370
        
        *(arg2 + 0x38) = rdx_2
    else
        result = data_1439b5358
        *(arg2 + 0x38) = rdx_2
    
    *(arg2 + 8) = result
else if (r8_1 != 0)
    result = data_1439b53a0
    *(arg2 + 0x38) = 0
    *(arg2 + 8) = result

if (arg1 != 0)
    result = zx.q(arg5)
    
    if (result.d s>= 0 && (*(arg4 + 0x9c) & 0x200000) != 0 && *(arg1 + 0x515b) != 0)
        void* r9 = arg1 + 0x1688
        void* r8_2 = *(r9 + 0x10)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        int32_t r10_1 = 1 << (result.b & 0x1f)
        int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2
        
        if (r8_2 != 0)
            r9 = r8_2
        
        uint64_t result_1
        
        if ((*(r9 + rdx_5) & r10_1) == 0)
            result_1 = arg1 + 0x16a8
            result = *(result_1 + 0x10)
            
            if (result != 0)
                result_1 = result
        
        if ((*(r9 + rdx_5) & r10_1) != 0 || (*(result_1 + rdx_5) & r10_1) != 0)
            result = data_1439b5358
            int32_t rcx_7 = *(arg2 + 0x38)
            *(arg2 + 8) = result
            *(arg2 + 0x38) = rcx_7

return result
