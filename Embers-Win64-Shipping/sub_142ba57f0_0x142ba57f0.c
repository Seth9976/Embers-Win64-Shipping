// 函数: sub_142ba57f0
// 地址: 0x142ba57f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x6cb8)
void var_6cc8
int64_t rax_1 = __security_cookie ^ &var_6cc8
int64_t var_6c98
int512_t zmm0 = memset(&var_6c98, 0, 0x1180)
var_6c98 = *(arg2 + 0x98)
void* rax_3 = *arg1
int32_t rbx = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x2474) = 0
char* rax_6 = *((&data_1436800f0)[sx.q(*(rax_3 + 8))] + 0x20)
char rcx_1 = *rax_6

if (rcx_1 != 0)
    while (true)
        if (rcx_1 == 0x20)
            do
                rax_6 = &rax_6[1]
            while (*rax_6 == 0x20)
        
        int32_t var_6ca8
        int32_t var_6ca4
        rax_6 = sub_142ba67f0(rax_6, arg1, &var_6ca4, &var_6ca8)
        
        if (var_6ca8 u<= 1)
            rbx = var_6ca4
        
        if (var_6ca8 u> 1 || rbx == 0)
            rcx_1 = *rax_6
            
            if (rcx_1 != 0)
                continue
            else if (rbx == 0)
                break
        
        if (sub_142b92f00(arg2, rbx, 1, zmm0) == 0)
            void* rbx_1 = *(arg2 + 0x78)
            
            if (*(rbx_1 + 0x9a) s> 0)
                void var_48d8
                memset(&var_48d8, 0, 0x48a0)
                int32_t rax_8 = arg1[7].d
                void* var_5b28_1 = &var_48d8
                int128_t var_48c8_1 = data_143683a20
                void* var_48d0_1 = arg2
                int64_t var_48b8_1 = 0
                int32_t var_5b30_1 = 0
                
                if (sub_142ba2850(&var_6c98, rbx_1 + 0x98) == 0)
                    void* rdi_1 = arg1 + 0x3c
                    int32_t i = 0
                    void var_6c60
                    void* r15_1 = &var_6c60
                    
                    do
                        int32_t rbx_2 = 0
                        var_6ca8 = 0
                        
                        if (sub_142ba43f0(&var_6c98, i) != 0)
                            break
                        
                        sub_142ba4b20(&var_6c98, 0, 0, i)
                        void* rcx_8 = *(r15_1 + 8)
                        void* r8_2 = rcx_8 + sx.q(*r15_1) * 0x48
                        
                        if (rcx_8 u< r8_2)
                            do
                                void* rax_12 = *(rcx_8 + 0x20)
                                
                                if (rax_12 != 0 && *(rax_12 + 0x20) == rcx_8 && rax_12 u> rcx_8
                                        && rbx_2 u< 0x10)
                                    int32_t temp10_1
                                    int32_t temp11_1
                                    temp10_1:temp11_1 =
                                        sx.q(sx.d(*(rcx_8 + 2)) - sx.d(*(rax_12 + 2)))
                                    int64_t rdx_8 = zx.q(rbx_2) + 1
                                    rbx_2 += 1
                                    *(rdi_1 + rdx_8 * 0xc) = (temp11_1 ^ temp10_1) - temp10_1
                                
                                rcx_8 += 0x48
                            while (rcx_8 u< r8_2)
                            
                            var_6ca8 = rbx_2
                        
                        sub_142ba6950(&var_6ca8, rdi_1 + 0xc, rax_8 u/ 0x64)
                        i += 1
                        *(rdi_1 + 8) = var_6ca8
                        r15_1 += 0x898
                        rdi_1 += 0x2430
                    while (i s< 2)
        
        break

int32_t r8_5

if (*(arg1 + 0x44) u<= 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg1[7].d * 0x32)
    r8_5 = ((temp0_1 & 0x7ff) + temp1_1) s>> 0xb
else
    r8_5 = arg1[9].d

*(arg1 + 0x10c) = r8_5
arg1[0x22].b = 0
arg1[0x21].d = r8_5 s/ 5
int32_t r8_7

if (*(arg1 + 0x2474) u<= 0)
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(arg1[7].d * 0x32)
    r8_7 = ((temp4_1 & 0x7ff) + temp5_1) s>> 0xb
else
    r8_7 = arg1[0x48f].d

arg1[0x4a7].d = r8_7 s/ 5
*(arg1 + 0x253c) = r8_7
arg1[0x4a8].b = 0
int64_t result = sub_142ba2760(&var_6c98)
__security_check_cookie(rax_1 ^ &var_6cc8)
return result
