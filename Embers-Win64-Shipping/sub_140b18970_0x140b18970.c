// 函数: sub_140b18970
// 地址: 0x140b18970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[1].d
int16_t* r8 = *arg2
int32_t rsi = r11 - 1
int32_t arg_8 = 0

if (r11 == 0)
    rsi = 0

int64_t r10 = sx.q(rsi)
void* rcx = &r8[r10]
void* rax = rcx
int32_t rax_1

if (rcx == r8)
label_140b189d9:
    rax_1 = -1
else
    while (true)
        int16_t rdx = *(rax - 2)
        rax -= 2
        
        if (rdx != 0x2f && rdx != 0x5c)
            rax_1 = ((rax - r8) s>> 1).d
            break
        
        if (rax == r8)
            goto label_140b189d9

int32_t rcx_1

if (rcx == r8)
label_140b18a09:
    rcx_1 = -1
else
    while (true)
        int16_t rax_2 = *(rcx - 2)
        rcx -= 2
        
        if (rax_2 == 0x2f || rax_2 == 0x5c)
            rcx_1 = ((rcx - r8) s>> 1).d
            break
        
        if (rcx == r8)
            goto label_140b18a09
        
        continue

int64_t rbx = 0
int64_t var_48
int64_t var_38
int64_t* rcx_7
int32_t rdi_3

if (rcx_1 s>= rax_1 + 1)
    int64_t var_40_2 = 0
    rcx_7 = &var_48
    rdi_3 = 2
else
    var_38 = 0
    int64_t var_30_1 = 0
    
    if (rax_1 + 1 - (rcx_1 + 1) s>= 0)
        int32_t rcx_2
        
        if (rcx_1 + 1 s>= 0)
            rcx_2 = rsi
            
            if (rcx_1 + 1 s< rsi)
                rcx_2 = rcx_1 + 1
        else
            rcx_2 = 0
        
        int64_t rdx_4 = sx.q(rax_1 + 1 - (rcx_1 + 1)) + sx.q(rcx_1 + 1)
        int64_t r9_1 = sx.q(rcx_2)
        
        if (rdx_4 s< r9_1)
            rsi = rcx_2
        else if (rdx_4 s< r10)
            rsi = rdx_4.d
        
        var_48 = 0
        int16_t* const rax_6 = &data_142d40450
        int64_t var_40_1 = 0
        
        if (r11 != 0)
            rax_6 = r8
        
        int32_t rdi_1 = 0
        int32_t rsi_1 = rsi - rcx_2
        int32_t r14_1 = 0
        void* r15_1 = &rax_6[r9_1]
        
        if (r15_1 != 0 && *r15_1 != 0 && rsi_1 s> 0)
            if (rsi_1 + 1 s> 0)
                sub_1405947f0(&var_48, rsi_1 + 1)
                r14_1 = var_40_1:4.d
                rdi_1 = var_40_1.d
                rbx = var_48
            
            rdi_1 += rsi_1 + 1
            var_40_1.d = rdi_1
            
            if (rdi_1 s> r14_1)
                sub_140594770(&var_48)
                r14_1 = var_40_1:4.d
                rdi_1 = var_40_1.d
                rbx = var_48
            
            UnDecorator::getReferenceType(rbx, r15_1, rsi_1 * 2)
            *(rbx + (sx.q(rdi_1) << 1) - 2) = 0
        
        var_30_1:4.d = r14_1
        var_38 = rbx
        var_30_1.d = rdi_1
    
    rcx_7 = &var_38
    rdi_3 = 1

*rcx_7 = 0
int32_t rax_8 = rcx_7[1].d
*arg1 = rbx
arg1[1].d = rax_8
int32_t rax_9 = *(rcx_7 + 0xc)
rcx_7[1] = 0
*(arg1 + 0xc) = rax_9

if ((rdi_3.b & 2) != 0)
    int64_t rcx_8 = var_48
    rdi_3 &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rdi_3.b & 1) != 0)
    int64_t rcx_9 = var_38
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return arg1
