// 函数: sub_1429e7e70
// 地址: 0x1429e7e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_70 = &arg1[0x27]
CRITICAL_SECTION* lpCriticalSection_1 = *(var_70 + 0x4578)
int32_t var_74 = 0
void* rax_3 = *arg3
int32_t* r9_1 = *(var_70 + 0x4578) + 0x40
*var_70 = 0

if (arg2 == 0 && var_70[0x78] s> 0)
    *(*(var_70 + 0x1e8) + 0x88) = 1

arg1[0x481].d = 0

if (*(arg1 + 0x4818) == 0 && var_70[0xcc] s>= 0 && r9_1[sx.q(var_70[0xcc]) * 0x34] == 0)
    lpCriticalSection_1->__offset(0x38).q(lpCriticalSection_1->__offset(0x28).q, 
        sx.q(var_70[0xcc]) * 0xd0 + &r9_1[6], lpCriticalSection_1)

int32_t* var_50 = var_70
CRITICAL_SECTION* lpCriticalSection = *(var_70 + 0x4578)
EnterCriticalSection(lpCriticalSection)
int32_t rdx_3 = 0
int32_t var_78 = 0

while (*(sx.q(rdx_3) * 0xd0 + lpCriticalSection + 0x40) != 0)
    rdx_3 += 1
    
    if (rdx_3 s>= 0xf)
        break

int32_t var_78_1 = rdx_3

if (rdx_3 == 0xf)
    var_78_1 = 0xffffffff
else
    *(sx.q(rdx_3) * 0xd0 + lpCriticalSection + 0x40) = 1

int64_t r9_2 = LeaveCriticalSection(*(var_70 + 0x4578))
var_70[0xcc] = var_78_1

if (var_70[0xcc] == 0xffffffff)
    sub_1429da010(var_70, 2, "Unable to find free frame buffer", r9_2)
    return zx.q(*var_70)

*(var_70 + 0x198) = sx.q(var_70[0xcc]) * 0xd0 + lpCriticalSection_1 + 0x40
*(arg1 + 0x4ec4) = 0

if (*(arg1 + 0x4818) == 0)
    arg1[0x482].q = &r9_1[sx.q(var_70[0xcc]) * 0x34]
else
    void* rcx_13 = *(arg1 + 0x4828)
    sub_1429e7450(rcx_13)
    *(r9_1 + sx.q(var_70[0xcc]) * 0xd0 + 0xc0) = rcx_13
    void* rcx_18 = &r9_1[sx.q(var_70[0xcc]) * 0x34]
    arg1[0x482].q = rcx_18
    *(rcx_18 + 0xc8) = 0xffffffff
    *(arg1[0x482].q + 0xcc) = 0xffffffff
    sub_1429e7470(rcx_13)

void var_98

if (__intrinsic_setjmp(&var_70[0x18], &var_98) == 0)
    var_70[0x16] = 1
    sub_1429e6880(arg1, rax_3, arg2 + rax_3, arg3, arg4)
    sub_1429e7580(arg1)
    
    if (var_70[0xd1] != 0)
        goto label_1429e837a
    
    var_70[0xd0] = var_70[0xcf]
    *(var_70 + 0x190) = *(var_70 + 0x198)
    
    if (var_70[0x43a].b != 0)
        if (*(arg1 + 0x4818) != 0)
            goto label_1429e8383
        
        sub_1429e1570(var_70)
    
label_1429e837a:
    
    if (*(arg1 + 0x4818) == 0)
        var_70[0x5e] = var_70[0x5a]
        var_70[0x5f] = var_70[0x5b]
        
        if (var_70[0xcf] != 0)
            var_70[0x1149] += 1
    else
    label_1429e8383:
        void* rbx_5 = *(arg1 + 0x4828)
        void* rdi_1 = *(rbx_5 + 0x18)
        sub_1429e7450(rbx_5)
        
        if (var_70[0xcf] != 0)
            var_70[0x1149] += 1
        
        *(rdi_1 + 0x7c) = 1
        *(rdi_1 + 0x78) = 1
        sub_1429e7460(rbx_5)
        sub_1429e7470(rbx_5)
    
    var_70[0x16] = 0
    return zx.q(var_74)

var_70[0x16] = 0
arg1[0x481].d = 1
data_143cc7028(&arg1[0x483])
int32_t i = 0

if (arg1[0x4e7].d s> 0)
    do
        data_143cc7028(sx.q(i) * 0x30 + arg1[0x486].q)
        i += 1
    while (i s< arg1[0x4e7].d)

EnterCriticalSection(lpCriticalSection_1)

if (*(arg1 + 0x4ec4) == 1)
    int32_t i_1 = *(arg1 + 0x4814)
    int32_t r14_1 = 0
    
    if (i_1 != 0)
        int64_t rsi_1 = 0x1a0
        
        do
            int64_t rbx_1 = sx.q(*(var_70 + rsi_1))
            
            if (rbx_1.d s>= 0)
                int32_t* rcx_31 = rbx_1 * 0xd0
                int32_t rax_33 = *(rcx_31 + r9_1)
                
                if (rax_33 s> 0)
                    *(rcx_31 + r9_1) = rax_33 - 1
                    
                    if (rax_33 == 1 && *(rcx_31 + r9_1 + 0x28) != 0)
                        lpCriticalSection_1->__offset(0x38).q(
                            lpCriticalSection_1->__offset(0x28).q, &r9_1[6] + rcx_31)
            
            if ((i_1.b & 1) != 0 && rbx_1.d s>= 0)
                int32_t* rcx_33 = rbx_1 * 0xd0
                int32_t rax_35 = *(rcx_33 + r9_1)
                
                if (rax_35 s> 0)
                    *(rcx_33 + r9_1) = rax_35 - 1
                    
                    if (rax_35 == 1 && *(rcx_33 + r9_1 + 0x28) != 0)
                        lpCriticalSection_1->__offset(0x38).q(
                            lpCriticalSection_1->__offset(0x28).q, &r9_1[6] + rcx_33)
            
            r14_1 += 1
            rsi_1 += 4
            i_1 s>>= 1
        while (i_1 != 0)
    
    int64_t rbx_2 = sx.q(r14_1)
    
    if (rbx_2 s< 8)
        void* rbx_3 = (rbx_2 << 2) + 0x1a0
        
        while (var_70[0xd1] == 0)
            int64_t rcx_35 = sx.q(*(var_70 + rbx_3))
            
            if (rcx_35.d s>= 0)
                int32_t* rcx_36 = rcx_35 * 0xd0
                int32_t rax_39 = *(rcx_36 + r9_1)
                
                if (rax_39 s> 0)
                    *(rcx_36 + r9_1) = rax_39 - 1
                    
                    if (rax_39 == 1 && *(rcx_36 + r9_1 + 0x28) != 0)
                        lpCriticalSection_1->__offset(0x38).q(
                            lpCriticalSection_1->__offset(0x28).q, &r9_1[6] + rcx_36)
            
            rbx_3 += 4
            
            if (rbx_3 s>= 0x1c0)
                break
    
    *(arg1 + 0x4ec4) = 0

int64_t rcx_38 = sx.q(var_70[0xcc])

if (rcx_38.d s>= 0)
    void* rdx_17 = &r9_1[rcx_38 * 0x34]
    int32_t rcx_40 = *rdx_17
    
    if (rcx_40 s> 0)
        *rdx_17 = rcx_40 - 1
        
        if (rcx_40 == 1 && *(rdx_17 + 0x28) != 0)
            lpCriticalSection_1->__offset(0x38).q(lpCriticalSection_1->__offset(0x28).q, 
                rdx_17 + 0x18)

LeaveCriticalSection(lpCriticalSection_1)
return 0xffffffff
