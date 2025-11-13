// 函数: sub_1406b04b0
// 地址: 0x1406b04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
void* r10 = *arg1
uint64_t r8 = 0
int64_t rdi = arg1[3]
void* var_38 = r10
void* r11 = r10
uint64_t var_30 = 0

if (rdi != 0)
    int64_t r8_4 = (zmm0.q - r10) s>> 2 << 5
    int64_t r8_5 = r8_4 + zmm0:8.q
    
    if (r8_4 + zmm0:8.q s>= 0 || neg.q(r8_5) == 0)
        r11 = r10 + (r8_5 u>> 5 << 2)
    else
        r11 -= (not.q(r8_5) u>> 5 << 2) + 4
    
    r8 = zx.q(r8_5.d) & 0x1f
    var_38 = r11
    var_30 = r8

zmm0 = *arg4
uint64_t rcx = 0
void* rdx = r10
int128_t var_28
var_28.q = rdx
var_28:8.q = 0

if (rdi != 0)
    int64_t rcx_4 = (zmm0.q - r10) s>> 2 << 5
    int64_t rcx_5 = rcx_4 + zmm0:8.q
    
    if (rcx_4 + zmm0:8.q s>= 0 || neg.q(rcx_5) == 0)
        rdx = r10 + (rcx_5 u>> 5 << 2)
    else
        rdx -= (not.q(rcx_5) u>> 5 << 2) + 4
    
    rcx = zx.q(rcx_5.d) & 0x1f
    var_28.q = rdx
    var_28:8.q = rcx

int64_t rbx_4 = ((r11 - r10) s>> 2 << 5) + r8

if (r11 != rdx || r8 != rcx)
    void* r10_1
    
    if (rdi s>= 0 || neg.q(rdi) == 0)
        r10_1 = r10 + (rdi u>> 5 << 2)
    else
        r10_1 = r10 - ((not.q(rdi) u>> 5 << 2) + 4)
    
    var_38.o = var_38.o
    uint64_t r8_6 = var_30
    void* rdx_1 = var_38
    int64_t rcx_6 = var_28:8.q
    int64_t r9 = var_28.q
    
    while (r9 != r10_1 || rcx_6 != (zx.q(rdi.d) & 0x1f))
        int32_t rax_26 = *rdx_1
        int32_t rax_27
        
        if ((*r9 & 1 << rcx_6.b) == 0)
            rax_27 = rax_26 & not.d(1 << (r8_6.d u% 0x20))
        else
            rax_27 = rax_26 | 1 << (r8_6.d u% 0x20)
        
        *rdx_1 = rax_27
        
        if (r8_6 u>= 0x1f)
            r8_6 = 0
            rdx_1 += 4
        else
            r8_6 += 1
        
        if (rcx_6 u>= 0x1f)
            rcx_6 = 0
            r9 += 4
        else
            rcx_6 += 1
    
    sub_1406afb70(arg1, ((rdx_1 - *arg1) s>> 2 << 5) + r8_6)
    r10 = *arg1

void* r10_2

if (rbx_4 s>= 0 || neg.q(rbx_4) == 0)
    r10_2 = r10 + (rbx_4 u>> 5 << 2)
else
    r10_2 = r10 - ((not.q(rbx_4) u>> 5 << 2) + 4)

*arg2 = r10_2
arg2[1] = zx.q(rbx_4.d) & 0x1f
return arg2
