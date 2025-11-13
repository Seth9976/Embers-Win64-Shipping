// 函数: sub_14285e360
// 地址: 0x14285e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* rax = sub_142898b60(sub_14285dc80)
int64_t rbp = 0
int32_t var_40_1
int32_t rdx
int32_t r9_1

if (rax != 0)
    uint128_t zmm0_1 = *arg2
    int64_t rcx = _mm_bsrli_si128(zmm0_1, 8).q
    uint128_t var_38_1
    uint64_t rbx_3
    void* rdi_1
    
    if (rcx u>= 2)
        char* rax_1 = zmm0_1.q
        var_38_1:8.q = rcx - 2
        rdi_1 = &rax_1[2]
        rbx_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
        var_38_1.q = rdi_1
    
    if (rcx u>= 2 && rcx - 2 u>= rbx_3)
        var_38_1.q = rdi_1 + rbx_3
        var_38_1:8.q = rcx - 2 - rbx_3
        *arg2 = var_38_1
        
        if (rbx_3 == 0)
        label_14285e4b1:
            sub_142898cb0(*(*(arg1 + 0xa8) + 0x260), sub_1428abf30)
            *(*(arg1 + 0xa8) + 0x260) = rax
            return 1
        
        while (true)
            if (rbx_3 u>= 2)
                void* rdi_2 = rdi_1 + 2
                uint32_t r8_3 = zx.d(*rdi_1) << 8 | zx.d(*(rdi_1 + 1))
                uint64_t rsi_1 = zx.q(r8_3)
                
                if (rbx_3 - 2 u>= rsi_1)
                    void* arg_18 = rdi_2
                    rdi_1 = rdi_2 + rsi_1
                    rbx_3 = rbx_3 - 2 - rsi_1
                    int64_t rax_5 = sub_1428ac160(nullptr, &arg_18, r8_3)
                    rbp = rax_5
                    
                    if (rax_5 == 0)
                        var_40_1 = 0x8bc
                        r9_1 = 0xd
                        goto label_14285e53f
                    
                    if (arg_18 != rsi_1 + rdi_2)
                        var_40_1 = 0x8c1
                        r9_1 = 0x83
                        goto label_14285e53f
                    
                    if (sub_142898d50(rax, rax_5) == 0)
                        var_40_1 = 0x8c7
                        break
                    
                    if (rbx_3 == 0)
                        goto label_14285e4b1
                    
                    continue
            
            sub_142856580(arg1, 0x32, 0x21d, 0x9f, "ssl\statem\statem_lib.c", 0x8b5)
            rbp = 0
            goto label_14285e561
        
        goto label_14285e3aa
    
    var_40_1 = 0x8aa
    r9_1 = 0x9f
label_14285e53f:
    char const* const var_48_2 = "ssl\statem\statem_lib.c"
    rdx = 0x32
else
    var_40_1 = 0x8a4
label_14285e3aa:
    char const* const var_48_1 = "ssl\statem\statem_lib.c"
    rdx = 0x50
    r9_1 = 0x41

sub_142856580(arg1, rdx, 0x21d, r9_1, "ssl\statem\statem_lib.c", var_40_1)
label_14285e561:
sub_142898cb0(rax, sub_1428abf30)
sub_1428abf30(rbp)
return 0
