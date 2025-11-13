// 函数: sub_142bc3cd0
// 地址: 0x142bc3cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_758
int64_t rax_1 = __security_cookie ^ &var_758
void* r14 = *(arg1 + 8)
uint32_t count = 0
int64_t var_730 = 0
char var_734 = 0
int64_t* r13 = *(r14 + 0x1e8)
int32_t result_1 = 0
int64_t rsi = *(r14 + 0x98)
void* var_328 = *(r14 + 0xe0)
int64_t* r12 = *(*(r14 + 0xd0) + 0x50)
int64_t rax_11
int32_t rbx_1
bool cond:1_1

if (r12 == 0)
    int32_t rbx_4 = *(r14 + 0x1a8) + *(r14 + 0x1a4)
    int32_t result_3 = sub_142b97060(r13, arg2 * rbx_4 + *(r14 + 0x1a0) + *(r14 + 0x1c0), arg3)
    result_1 = result_3
    
    if (result_3 != 0)
        rax_11 = 0
    else
        int32_t result_4 = sub_142b96500(r13, rbx_4 * 2)
        result_1 = result_4
        
        if (result_4 != 0)
            rax_11 = 0
        else
            char i_5 = *(r14 + 0x1a4)
            rbx_1 = 0
            char* rcx_7 = r13[7]
            
            if (i_5 != 0)
                char i
                
                do
                    uint32_t rax_8 = zx.d(*rcx_7)
                    rcx_7 = &rcx_7[1]
                    rbx_1 = rbx_1 << 8 | rax_8
                    i = i_5
                    i_5 -= 1
                while (i != 1)
            
            char i_7 = *(r14 + 0x1a8)
            int32_t rsi_1 = 0
            char i_6 = i_7
            
            if (i_7 != 0)
                char i_1
                
                do
                    uint32_t rax_9 = zx.d(*rcx_7)
                    rcx_7 = &rcx_7[1]
                    rsi_1 = rsi_1 << 8 | rax_9
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            void* rdx_9 = &rcx_7[sx.q(*(r14 + 0x1a4))]
            
            if (i_7 != 0)
                char i_2
                
                do
                    uint32_t rax_10 = zx.d(*rdx_9)
                    rdx_9 += 1
                    count = count << 8 | rax_10
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
            
            sub_142b96620(r13)
            
            if (rbx_1 u>= *(r14 + 0x1b0) || count u> r13[1].d || rsi_1 u> count)
                result_1 = 9
                rax_11 = var_730
            else
                uint32_t count_1 = count
                count -= rsi_1
                
                if (count_1 == rsi_1)
                    rax_11 = var_730
                else
                    int512_t zmm0_1
                    rax_11, zmm0_1 = sub_142b99860(rsi, count, &result_1)
                    var_730 = rax_11
                    
                    if (result_1 == 0)
                        int32_t result_5
                        int64_t r8_5
                        result_5, r8_5 =
                            sub_142b969a0(r13, *(r14 + 0x1c0) + rsi_1, rax_11, count, zmm0_1)
                        result_1 = result_5
                        cond:1_1 = result_5 != 0
                    label_142bc3f2f:
                        
                        if (cond:1_1)
                            rax_11 = var_730
                        else
                            int32_t* rcx_13 = (zx.q(rbx_1) << 4) + *(r14 + 0x1d0)
                            *(arg1 + 0x674) = *rcx_13
                            *(arg1 + 0x678) = *(rcx_13 + 8)
                            *(arg1 + 0x680) = 0
                            *(arg1 + 0x688) = 0
                            void* rsi_4 = zx.q(rbx_1) * 0xfc + *(r14 + 0x1b8)
                            *(arg1 + 0x690) = *(rsi_4 + 0xd8)
                            *(arg1 + 0x6a0) = *(rsi_4 + 0xe8)
                            int32_t rax_15 = *(rsi_4 + 4)
                            *(arg1 + 0x670) = rax_15
                            uint64_t rbx_6
                            
                            if (rax_15 s< 0)
                                rbx_6 = 0
                            label_142bc3ffc:
                                void* r13_1 = var_328
                                
                                if (rax_15 s>= 0)
                                    (*(r13_1 + 0x20))(var_730, zx.q(count), 0x10ea)
                                
                                int32_t result_6
                                
                                if (*(arg1 + 0x5e) == 0)
                                    r8_5.b = 1
                                    void var_708
                                    (*(r13_1 + 0x30))(&var_708, arg1, r8_5)
                                    void var_318
                                    (*(r13_1 + 0x38))(r14, rsi_4, &var_318)
                                    int32_t rdi_3 = count - rbx_6.d
                                    int64_t rbx_7 = rbx_6 + var_730
                                    void* var_3e0_1 = &var_318
                                    result_6 =
                                        (*(*(r13_1 + 0x18) + 0x18))(&var_708, rbx_7, zx.q(rdi_3))
                                    result_1 = result_6
                                    
                                    if (result_6.b == 0xa4)
                                        var_734 = 1
                                        *(*(arg1 + 0x10) + 0xf8) = 0
                                        result_6 = (*(*(r13_1 + 0x18) + 0x18))(&var_708, rbx_7, 
                                            zx.q(rdi_3))
                                        result_1 = result_6
                                else
                                    result_6 = (*(*(r13_1 + 0x18) + 0x10))(arg1, 
                                        zx.q(rbx_6.d) + var_730, zx.q(count - rbx_6.d))
                                    result_1 = result_6
                                
                                if (result_6 == 0 && r12 != 0 && *(*r12 + 0x10) != 0)
                                    var_328.d = sub_142b96160(*(arg1 + 0x38)) s>> 0x10
                                    var_328:4.d = 0
                                    int32_t rax_24 = sub_142b96160(*(arg1 + 0x40))
                                    int32_t rax_26 = sub_142b96160(*(arg1 + 0x44))
                                    result_1 = (*(*r12 + 0x10))(r12[1], zx.q(arg2), 0, &var_328)
                                    *(arg1 + 0x38) = var_328.d << 0x10
                                    *(arg1 + 0x40) = rax_24 s>> 0x10 << 0x10
                                    *(arg1 + 0x44) = rax_26 s>> 0x10 << 0x10
                                
                                rax_11 = var_730
                            else
                                rbx_6 = zx.q(rax_15)
                                
                                if (rax_15 u<= count)
                                    goto label_142bc3ffc
                                
                                result_1 = 9
                                rax_11 = var_730
else
    char* var_718
    int32_t result_2 = (**r12)(r12[1], arg3, &var_718)
    result_1 = result_2
    
    if (result_2 == 0)
        char i_4 = *(r14 + 0x1a4)
        rbx_1 = 0
        char* rcx_1 = var_718
        
        if (i_4 != 0)
            char i_3
            
            do
                uint32_t rax_5 = zx.d(*rcx_1)
                rcx_1 = &rcx_1[1]
                rbx_1 = rbx_1 << 8 | rax_5
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
        
        int32_t var_710
        
        if (var_710 != 0)
            count = var_710 - *(r14 + 0x1a4)
            int64_t rax_7 = sub_142b99860(rsi, count, &result_1)
            var_730 = rax_7
            
            if (result_1 == 0)
                memcpy(rax_7, &var_718[sx.q(*(r14 + 0x1a4))], count)
        
        int64_t r8_4 = *r12
        (*(r8_4 + 8))(r12[1], &var_718, r8_4)
        cond:1_1 = result_1 != 0
        goto label_142bc3f2f
    
    rax_11 = 0
sub_142b99980(rsi, rax_11)
*(*(arg1 + 0x10) + 0xf9) = var_734
uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_758)
return result
