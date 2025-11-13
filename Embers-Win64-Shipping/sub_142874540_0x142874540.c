// 函数: sub_142874540
// 地址: 0x142874540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_8 = 0x70
int32_t rdi = 3
int32_t rax = sub_14284fc20(arg1)
void* rax_1 = *(arg1 + 0x598)
void* r8

if (rax_1 != 0)
    r8 = *(arg1 + 0x738)

int32_t var_20_1
int32_t rdx_6
int32_t r9_2

if (rax_1 == 0 || r8 == 0)
    var_20_1 = 0x39d
    r9_2 = 0x44
    rdx_6 = 0x50
else
    int64_t r9_1 = *(rax_1 + 0x1f0)
    
    if (r9_1 == 0)
        int64_t rax_3 = *(r8 + 0x1f0)
        
        if (rax_3 != 0)
            rdi = rax_3(arg1, &arg_8, *(r8 + 0x1f8), r9_1)
    else
        rdi = r9_1(arg1, &arg_8, *(rax_1 + 0x1f8))
    
    if (arg1[0xe] != 0 && arg3 != 0 && rdi == 0)
        if (arg1[0x32] == rdi)
        label_142874644:
            sub_1428a6780(*(*(arg1 + 0x508) + 0x158))
            *(*(arg1 + 0x508) + 0x158) = sub_1428a6ba0(*(arg1 + 0x630))
            
            if (*(*(arg1 + 0x508) + 0x158) == 0 && *(arg1 + 0x630) != 0)
                sub_142856580(arg1, 0x50, 0x22e, 0x44, "ssl\statem\extensions.c", 0x3b8)
        else
            int32_t* rcx_2 = *(arg1 + 8)
            
            if ((*(*(rcx_2 + 0xc0) + 0x60) & 8) == 0)
                int32_t rax_5 = *rcx_2
                
                if (rax_5 s>= 0x304 && rax_5 != 0x10000)
                    goto label_142874644
    
    void* rax_8 = *(arg1 + 0xa8)
    
    if (*(rax_8 + 0x198) == 0 || *(rax_8 + 0x220) == 0)
        void* rcx_8 = *(arg1 + 0x598)
        
        if (rcx_8 != *(arg1 + 0x738))
            *(rcx_8 + 0x74) += 1
            void* rcx_9 = *(arg1 + 0x738)
            *(rcx_9 + 0x74)
            *(rcx_9 + 0x74) += 1
    
    if (rdi != 0 || arg1[0x19c] == 0 || (not.d(rax u>> 0xe) & 1) == 0)
    label_142874796:
        
        if (rdi == 1)
            int32_t* rcx_14 = *(arg1 + 8)
            int32_t rax_15
            
            if ((*(*(rcx_14 + 0xc0) + 0x60) & 8) == 0)
                rax_15 = *rcx_14
            
            if ((*(*(rcx_14 + 0xc0) + 0x60) & 8) != 0 || rax_15 s< 0x304 || rax_15 == 0x10000)
                sub_1428732d0(arg1, 1, zx.q(arg_8))
            
            return 1
        
        if (rdi != 2)
            if (rdi == 3)
                arg1[0x1c4] = 0
            
            return 1
        
        rdx_6 = arg_8
        r9_2 = 0xea
        var_20_1 = 0x3e9
    else
        if (not(test_bit(sub_14284fc20(arg1), 0xe)))
            goto label_142874796
        
        arg1[0x19c] = 0
        
        if (arg1[0x32] != 0)
            goto label_142874796
        
        void* rax_11 = sub_142857980(arg1)
        
        if (rax_11 == 0)
            var_20_1 = 0x3e1
            r9_2 = 0x44
            rdx_6 = 0x50
        else
            sub_1428a6780(*(rax_11 + 0x180))
            __builtin_memset(rax_11 + 0x180, 0, 0x1c)
            
            if (sub_142857d90(arg1, rax_11) != 0)
                goto label_142874796
            
            var_20_1 = 0x3dc
            r9_2 = 0x44
            rdx_6 = 0x50

sub_142856580(arg1, rdx_6, 0x22e, r9_2, "ssl\statem\extensions.c", var_20_1)
return 0
