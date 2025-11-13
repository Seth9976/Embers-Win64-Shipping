// 函数: sub_1426bbe90
// 地址: 0x1426bbe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
char arg_18 = arg3
void* arg_8 = arg1
int64_t var_44 = -1
void* rdi = arg1 + 0xf8
void* rsi = arg1
char var_48 = arg3
sub_1426ac380(rdi, *(arg1 + 0x100) - *(arg1 + 0x12c), 0)

if (*(rdi + 0x48) != 0)
    void* r8 = rsi + 0x130
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(*(rsi + 0x140)) - 1) & zx.q(arg3)) << 2))
    var_44:4.d = i
    var_44.d = i
    
    if (i != 0xffffffff)
        int64_t rdx_5 = *rdi
        var_44.d = i
        
        do
            int64_t rcx_3 = sx.q(i) << 5
            i = *(rcx_3 + rdx_5 + 0x18)
            
            if (*(rcx_3 + rdx_5) == arg3)
                break
            
            var_44.d = i
        while (i != 0xffffffff)
        
        var_44:4.d = i

uint128_t zmm1 = rdi.o
uint128_t var_68 = zmm1

if ((_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d == 0xffffffff)
label_1426bc019:
    var_68:8.q = arg5
    var_68.q = &arg_18
    sub_1426a21a0(rdi, &arg_8, &var_68, nullptr)
    int64_t rax_11 = *rdi
    int64_t rcx_12 = sx.q(arg_8.d) << 5
    int64_t var_78 = 0
    
    if (*(rcx_12 + rax_11 + 0x10) != 0)
        int64_t* rcx_13 = *(rcx_12 + rax_11 + 8)
        
        if (rcx_13 != 0)
            var_78 = *(*(*rcx_13 + 0x30))(rcx_13, &arg_8)
    
    var_68.q = &arg_20
    var_68:8.q = &var_78
    sub_1420f29b0(rsi + 0x148, &arg_8, &var_68, nullptr)
    *arg2 = var_78
else
    char r14_1 = var_68:8.b
    int64_t* r12_1 = var_68.q
    int32_t i_1 = var_44:4.d
    int32_t i_2 = var_68:0xc.d
    
    while (true)
        int64_t rbx_1 = 0
        
        if (arg5[1].d != 0)
            int64_t* rcx_4 = *arg5
            void var_70
            
            if (rcx_4 != 0)
                rbx_1 = *(*(*rcx_4 + 0x30))(rcx_4, &var_70)
        
        int64_t rax_6 = 0
        void* rcx_7 = (sx.q(i_2) << 5) + *r12_1
        
        if (*(rcx_7 + 0x10) != 0)
            int64_t* rcx_8 = *(rcx_7 + 8)
            
            if (rcx_8 != 0)
                rax_6 = *(*(*rcx_8 + 0x30))(rcx_8, &var_68)
        
        if (rax_6 == rbx_1)
            int64_t rax_16 = *r12_1
            int64_t rcx_18 = sx.q(i_2) << 5
            *arg2 = 0
            
            if (*(rcx_18 + rax_16 + 0x10) != 0)
                int64_t* rcx_19 = *(rcx_18 + rax_16 + 8)
                
                if (rcx_19 != 0)
                    *arg2 = *(*(*rcx_19 + 0x30))(rcx_19, &arg_8)
            
            break
        
        i_2 = i_1
        
        if (i_1 != 0xffffffff)
            int64_t rcx_9 = *r12_1
            
            do
                int64_t rax_10 = sx.q(i_2) << 5
                i_1 = *(rax_10 + rcx_9 + 0x18)
                
                if (*(rax_10 + rcx_9) == r14_1)
                    break
                
                i_2 = i_1
            while (i_1 != 0xffffffff)
            
            if (i_2 != 0xffffffff)
                continue
        
        rsi = arg_8
        goto label_1426bc019

sub_140745b20(arg5)
return arg2
