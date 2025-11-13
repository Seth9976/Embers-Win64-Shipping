// 函数: sub_141a5bd40
// 地址: 0x141a5bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d
int32_t r10 = 0
uint64_t r9 = *arg1
int64_t rsi = *arg2
int32_t i = i_2
char arg_8
uint32_t arg_c
uint64_t arg_10
uint64_t rax

if (i_2 s> 0)
    arg_10 = r9
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + r10
        rax = *(rsi + sx.q(rax_4) * 0x10)
        arg_8.q = rax
        char rdx_1
        
        if (rax.b == 2)
            rdx_1 = rax.b
        label_141a5be07:
            
            if (rdx_1 != r9.b || (rdx_1 != 2 && (rax u>> 0x20).d != (r9 u>> 0x20).d))
                rax.b = 1
            else
                rax.b = 0
        else
            char rcx_4
            int32_t* r8
            
            if (r9.b != 2)
                uint32_t rcx_6 = (r9 u>> 0x20).d
                uint32_t rdx_3 = (rax u>> 0x20).d
                
                if (rdx_3 s< rcx_6)
                    r8 = &arg_c
                    rcx_4 = rax.b
                label_141a5bdf0:
                    rdx_1 = rax.b
                    
                    if (rcx_4 == 2)
                        goto label_141a5be07
                    
                    goto label_141a5bdfb
                
                if (rdx_3 s> rcx_6 || rax.b != 1)
                    rcx_4 = r9.b
                    goto label_141a5bde5
                
                r8 = &arg_c
            label_141a5bdfb:
                rdx_1 = rax.b
                
                if (*r8 != (rax u>> 0x20).d
                        || (rdx_1 == r9.b && (rdx_1 == 2 || (rax u>> 0x20).d == (r9 u>> 0x20).d)))
                    rax.b = 0
                else
                    rax.b = 1
            else
                rcx_4 = r9.b
            label_141a5bde5:
                r8 = &arg_10:4
                
                if (rcx_4 == rax.b)
                    goto label_141a5bdf0
                
                rax.b = 0
        
        if (rax.b != 0)
            r10 = rax_4 + rcx_1
    while (i s> 0)

int64_t rbx_2 = arg1[1]
int32_t r14 = r10 - 1

if (r10 s<= 0)
    r14 = r10

uint32_t rbx_3
int64_t* rdi

if (rbx_2.b == 0)
    rdi.b = 1
    rbx_3 = (rbx_2 u>> 0x20).d
    arg_8 = 1
    arg_c = rbx_3
else if (rbx_2.b != 1)
    arg_8.q = rbx_2
    rbx_3 = arg_c
    rdi = zx.q(arg_8)
else
    rdi.b = 0
    rbx_3 = (rbx_2 u>> 0x20).d
    arg_c = rbx_3
    arg_8 = 0

if (r14 s>= i_2)
    return 

int128_t* r15_3 = (sx.q(r14) << 4) + rsi
arg_10.d = 0xffffffff
arg_10:4.d = 0
uint64_t rsi_1 = arg_10

do
    int128_t zmm0 = *r15_3
    void** const var_58 = &data_14302f408
    int128_t* var_50_1 = arg3
    int128_t var_68 = zmm0
    int32_t var_48_1 = r14
    sub_141a37e10(arg3, &var_68, &var_58, rsi_1)
    rax = *r15_3
    arg_10 = rax
    
    if (rdi.b != 2 && rax.b != 2)
        uint32_t rcx_13 = (rax u>> 0x20).d
        char rcx_14
        int32_t* rdx_6
        
        if (rcx_13 s> rbx_3)
            rcx_14 = rax.b
            rdx_6 = &arg_10:4
        label_141a5bf19:
            
            if (rcx_14 == 2)
                break
            
            goto label_141a5bf22
        
        if (rcx_13 s< rbx_3 || rax.b != 0)
            rdx_6 = &arg_c
            rcx_14 = rdi.b
            
            if (rdi.b == rax.b)
                goto label_141a5bf19
        else
            rdx_6 = &arg_10:4
        label_141a5bf22:
            
            if (*rdx_6 == (rax u>> 0x20).d)
                break
    
    r14 += 1
    r15_3 = &r15_3[1]
while (r14 s< i_2)
