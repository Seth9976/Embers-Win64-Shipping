// 函数: sub_142887e80
// 地址: 0x142887e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t r12 = 0
void* rbx = arg1

if (*(arg1 + 0xc8) != 0 && (*(arg1 + 0x6e0) & 2) == 0)
    return 1

int32_t var_60_1
int32_t rdx
int32_t r9_1

if (*(*(arg1 + 0xa8) + 0x408) == 0)
    uint128_t zmm0 = *arg2
    uint128_t var_50 = zmm0
    int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
    
    if (rcx u< 2)
    label_142888180:
        var_60_1 = 0x278
    label_142888188:
        r9_1 = 0x9f
        rdx = 0x32
    else
        char* rax_2 = var_50.q
        void* r14_1 = &rax_2[2]
        var_50.q = r14_1
        var_50:8.q = rcx - 2
        uint64_t rdi_3 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
        
        if (rcx - 2 u< rdi_3)
            goto label_142888180
        
        var_50.q = r14_1 + rdi_3
        var_50:8.q = rcx - 2 - rdi_3
        
        if (rcx - 2 != rdi_3)
            goto label_142888180
        
        *arg2 = var_50
        int64_t var_58
        sub_142865410(rbx, &var_50, &var_58)
        void* rax_5 = *(rbx + 0x508)
        int64_t r13_1 = *(rax_5 + 0x170)
        int64_t rdx_2 = *(rax_5 + 0x178)
        int64_t arg_8 = rdx_2
        
        if (r13_1 == 0)
            rdx = (r13_1 + 0x6d).d
            var_60_1 = 0x287
            r9_1 = rdx + 0x64
        else if (*(*(rbx + 0xa8) + 0x406) == 0 || rdi_3 != 0)
            if (rdi_3 == 0)
                return 1
            
            while (true)
                if (rdi_3 u>= 2)
                    uint32_t rsi_2 = zx.d(*(r14_1 + 1)) | zx.d(*r14_1) << 8
                    void* var_38_1
                    var_38_1.o = (r14_1 + 2).o
                    
                    if (rdi_3 - 2 u>= 2)
                        uint64_t r14_3 = zx.q(*(r14_1 + 3)) | zx.q(*(r14_1 + 2)) << 8
                        void* var_38_2 = r14_1 + 4
                        int64_t var_30_2 = rdi_3 - 4
                        
                        if (rdi_3 - 4 u>= r14_3)
                            uint64_t rdi_7 = rdi_3 - 4 - r14_3
                            void* var_38_3
                            var_38_3.o = (r14_1 + 4 + r14_3).o
                            
                            if (r14_3 != 0)
                                if (r12 == 0)
                                    int16_t rcx_6 = *(*(rbx + 0xa8) + 0x406)
                                    
                                    if (rcx_6 != 0 && (rsi_2 != zx.d(rcx_6) || rdi_7 != 0))
                                        rdx = 0x2f
                                        var_60_1 = 0x2ae
                                        r9_1 = 0x6c
                                        break
                                    
                                    int64_t var_68
                                    var_68.d = 0
                                    arg1 = rbx
                                    
                                    if (sub_14285dd50(rbx, rsi_2.w, rdx_2, r13_1, 0) == 0)
                                        rdx = 0x2f
                                        var_60_1 = 0x2b5
                                        r9_1 = 0x6c
                                        goto label_1428881a7
                                    
                                    var_68.d = 1
                                    
                                    if (sub_14285dd50(arg1, rsi_2.w, var_50.q, var_58, 1) != 0)
                                        int64_t* rax_16 = sub_142872ce0(rsi_2.w)
                                        *(*(rbx + 0xa8) + 0x408) = rax_16
                                        
                                        if (rax_16 == 0)
                                            var_60_1 = 0x2c1
                                            rdx = 0x50
                                            r9_1 = 0x13a
                                            break
                                        
                                        *(*(rbx + 0xa8) + 0x406) = rsi_2.w
                                        
                                        if (sub_142896c60(*(*(rbx + 0xa8) + 0x408), r14_1 + 4, 
                                                r14_3) == 0)
                                            var_60_1 = 0x2cb
                                            rdx = 0x2f
                                            r9_1 = 0x132
                                            break
                                        
                                        r12 = 1
                                    
                                    rdx_2 = arg_8
                                
                                if (rdi_7 == 0)
                                    return 1
                                
                                rdi_3 = rdi_7
                                r14_1 = var_38_3
                                continue
                
                var_60_1 = 0x29b
                goto label_142888188
        else
            var_60_1 = 0x292
            rdx = (rdi_3 + 0x2f).d
            r9_1 = (rdi_3 + 0x6c).d
    
    arg1 = rbx
else
    rdx = 0x50
    var_60_1 = 0x272
    r9_1 = 0x44

label_1428881a7:
sub_142856580(arg1, rdx, 0x1cf, r9_1, "ssl\statem\extensions_srvr.c", var_60_1)
return 0
