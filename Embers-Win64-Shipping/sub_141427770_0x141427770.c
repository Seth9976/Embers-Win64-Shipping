// 函数: sub_141427770
// 地址: 0x141427770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[5].d
void* result_1 = &arg1[2]
int32_t var_54 = 1
int32_t var_58 = 0
void* result_2 = result_1
int32_t rdi = 0
int32_t var_48 = 0xffffffff
int32_t r8 = 0
int64_t var_44 = 0

if (r9 != 0)
    void* result_4 = *(result_1 + 0x10)
    void* result_3 = result_1
    
    if (result_4 != 0)
        result_3 = result_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rcx = *result_3
    
    if (rcx != 0)
    label_141427818:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_54_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_44.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r9)
            var_44.d = r9
    else
        while (true)
            int64_t rcx_1 = sx.q(rdi)
            r8 += 0x20
            rdi += 1
            var_44:4.d = r8
            var_58 = rdi
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(result_3 + (rcx_1 << 2) + 4)
            int32_t var_48_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141427818
        
        var_44.d = r9

int64_t* rdx_3 = arg1
int64_t* var_38 = rdx_3
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r9)
    int32_t rcx_3 = 0
    
    while (true)
        void* rdi_3 = sx.q(rcx_3) * 0x30 + *rdx_3
        int64_t* rcx_4 = *(rdi_3 + 0x20)
        
        if (rcx_4 != 0 && *(rdi_3 + 0x18) != 0)
            (*(*rcx_4 + 0x10))(rcx_4, rdi_3 + 0x18)
            *(rdi_3 + 0x20) = 0
        
        sub_14081c9d0(rdi_3 + 0x18)
        var_20.d &= not.d(var_30:4.d)
        sub_14059bdd0(&var_30)
        rcx_3 = var_20:4.d
        
        if (rcx_3 s>= *(var_30:8.q + 0x18))
            break
        
        rdx_3 = var_38

arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_1405a5220(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* rsi_1 = result_1 + 0x18
void* result = *(result_1 + 0x10)
uint32_t rdx_7 = (*rsi_1 + 0x1f) u>> 5

if (result != 0)
    result_1 = result

if (rdx_7 u> 8)
    result = memset(result_1, 0, zx.q(rdx_7) << 2)
else if (rdx_7 != 0)
    result = nullptr
    __builtin_memset(result_1, 0, zx.q(rdx_7) << 2)

*rsi_1 = 0
return result
