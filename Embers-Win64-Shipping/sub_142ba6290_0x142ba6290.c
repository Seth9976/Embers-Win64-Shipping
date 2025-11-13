// 函数: sub_142ba6290
// 地址: 0x142ba6290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_2 = *(arg3 + 0x80)
int32_t r10 = arg4
void* var_50 = arg2
void* r8 = *(rax_2 + 0x38)
void* rsi = *(arg3 + 0x78)
void* r15 = arg1[2]
int64_t* r13 = *(rsi + 0xf0)
void* rcx = *r13
void* var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t rcx_3

if (*(r8 + 0x10) != 0)
    rcx_3 = arg5 s>> 0x10 & 0xf

if (*(r8 + 0x10) == 0 || *(r8 + 8) != rcx_3)
    rcx_3 = arg5 s>> 0x10 & 0xf
    *(r8 + 8) = rcx_3
    *(r8 + 0xc) = *(rax_2 + 0x18)
    *(r8 + 0x1c) = *(rax_2 + 0x28)
    *(r8 + 0x24) = *(rax_2 + 0x30)

var_78 = arg3
int64_t var_70
var_70.d = *(r8 + 0x10)
int64_t var_68
var_68.d = 0
var_70:4.d = *(r8 + 0x14)
*arg1 = arg3
int64_t rax_6 = *(arg3 + 0xb8)
int32_t var_60 = rcx_3
int32_t result_1 = 0
var_68:4.d = 0
var_60 = 0
arg1[1] = rax_6

if (rax_6 == 0)
    int32_t result_3 = sub_142ba2090(arg3, &arg1[1], arg2)
    r10 = arg4
    result_1 = result_3
    
    if (result_3 == 0)
        *(arg3 + 0xb8) = arg1[1]
        *(arg3 + 0xc0) = sub_142ba1ea0

int32_t result

if (result_1 != 0)
    result = result_1
else
    int64_t* var_88
    int512_t zmm0_1
    result, zmm0_1 = sub_142ba1f60(arg1[1], r10, result_1 + 0x40, &var_88)
    
    if (result == 0)
        int64_t* r14_1 = var_88
        int64_t* rax_9 = (&data_14367f7a8)[sx.q(*(*r14_1 + 4))]
        var_88 = rax_9
        arg1[3] = r14_1
        int64_t rax_10 = rax_9[3]
        
        if (rax_10 == 0)
            zmm0_1.o = var_78.o
            *(r14_1 + 8) = zmm0_1.o
            *(r14_1 + 0x18) = var_68.o
        else
            rax_10(r14_1, &var_78)
        
        int64_t rax_12 = var_88[6]
        
        if (rax_12 != 0)
            result = rax_12(r15, r14_1)
        
        if (rax_12 == 0 || result == 0)
            result = sub_142b92f00(arg3, arg4, (arg5 & 0xfffffffb) | 0x2801, zmm0_1)
            int32_t result_2 = result
            
            if (result == 0)
                if (var_60 == 1)
                    char rcx_12 = *(*(arg3 + 0xd0) + 0x58)
                    
                    if (rcx_12 == 0)
                        sub_142ba6070(arg1, arg3, r14_1)
                    else if (rcx_12 s< 0 && *(var_50 + 0x21) == result_2.b)
                        sub_142ba6070(arg1, arg3, r14_1)
                
                char rax_15 = *(r13 + 0xc)
                arg1[4].b = rax_15
                
                if (rax_15 != 0)
                    int128_t zmm0_2 = *(r13 + 0x10)
                    *(arg1 + 0x24) = zmm0_2
                    *(arg1 + 0x34) = r13[4]
                    var_50.o = zmm0_2
                    
                    if (sub_142b938e0(&var_50) == 0)
                        sub_142b97680(arg1 + 0x34, &var_50)
                
                if (*(rsi + 0x60) == 0x6f75746c)
                    if (arg1[4].b != 0)
                        sub_142b95270(rsi + 0x98, *(arg1 + 0x34), arg1[7].d)
                    
                    *(arg1 + 0x3c) = *(r15 + 0xc)
                    arg1[8].d = *(r15 + 0x14)
                    *(arg1 + 0x44) = sub_142b93e80(*(rsi + 0x40), *(r15 + 8)) + *(r15 + 0xc)
                    arg1[9].d = *(r15 + 0x14)
                    
                    if (*(rsi + 0x9a) == 0)
                        goto label_142ba6663
                    
                    int64_t r10_1 = var_88[7]
                    
                    if (r10_1 != 0)
                        result = r10_1(zx.q(arg4), r15, rcx + 0x18, r14_1)
                        result_2 = result
                    
                    if (r10_1 == 0 || result == 0)
                        int32_t rax_32
                        
                        if (var_60 == 1)
                            int32_t rdx_17 = *(arg1 + 0x3c)
                            int32_t r8_10 = *(arg1 + 0x44)
                            int32_t rcx_28 = (rdx_17 + 0x20) & 0xffffffc0
                            *(arg1 + 0x3c) = rcx_28
                            *(arg1 + 0x44) = (r8_10 + 0x20) & 0xffffffc0
                            *(rsi + 0xdc) = rcx_28 - rdx_17
                            rax_32 = *(arg1 + 0x44) - r8_10
                        else
                            int64_t rax_24 = sx.q(*(r15 + 0x48))
                            
                            if (rax_24.d s<= 1 || (*(r15 + 0x1168) & 4) != 0)
                                int32_t r8_9 = *(arg1 + 0x3c)
                                int32_t r9_4 = *(arg1 + 0x44)
                                int32_t rdx_15 = (r8_9 + 0x20 + *(r15 + 0x1178)) & 0xffffffc0
                                *(arg1 + 0x3c) = rdx_15
                                *(arg1 + 0x44) = (r9_4 + 0x20 + *(r15 + 0x117c)) & 0xffffffc0
                                *(rsi + 0xdc) = rdx_15 - r8_9
                                rax_32 = *(arg1 + 0x44) - r9_4
                            else
                                void* rdx_10 = *(r15 + 0x50)
                                void* r11_1 = rdx_10 + rax_24 * 0x48
                                int32_t r9_3 = *(arg1 + 0x44) - *(r11_1 - 0x44)
                                int32_t r8_8 = *(rdx_10 + 8)
                                int32_t r10_2 = *(rdx_10 + 4)
                                int32_t rcx_21 = r8_8 - r10_2
                                int32_t rdx_12 = *(r11_1 - 0x40) + r9_3
                                int32_t rbx_1 = rcx_21 - 8
                                
                                if (r10_2 s>= 0x18)
                                    rbx_1 = rcx_21
                                
                                int32_t r15_1 = rdx_12 + 8
                                
                                if (r9_3 s>= 0x18)
                                    r15_1 = rdx_12
                                
                                int32_t rax_26 = (rbx_1 + 0x20) & 0xffffffc0
                                *(arg1 + 0x3c) = rax_26
                                int32_t rcx_23 = (r15_1 + 0x20) & 0xffffffc0
                                *(arg1 + 0x44) = rcx_23
                                
                                if (rax_26 s>= r8_8 && r10_2 s> 0)
                                    *(arg1 + 0x3c) = rax_26 - 0x40
                                
                                if (rcx_23 s<= *(r11_1 - 0x40) && r9_3 s> 0)
                                    *(arg1 + 0x44) = rcx_23 + 0x40
                                
                                *(rsi + 0xdc) = *(arg1 + 0x3c) - rbx_1
                                rax_32 = *(arg1 + 0x44) - r15_1
                        
                        *(rsi + 0xe0) = rax_32
                        goto label_142ba6663
                else
                    result_2 = 7
                label_142ba6663:
                    int32_t rcx_31 = *(rsi + 0x44) - *(rsi + 0x38)
                    var_88.d = rcx_31
                    var_88:4.d = *(rsi + 0x48) - *(rsi + 0x3c)
                    var_88.d = sub_142b93e80(rcx_31, r14_1[2].d)
                    var_88:4.d = sub_142b93e80(var_88:4.d, *(r14_1 + 0x14))
                    
                    if (arg1[4].b != 0)
                        sub_142b95190(rcx + 0x18, arg1 + 0x24)
                        sub_142b97680(&var_88, arg1 + 0x24)
                    
                    int32_t rdx_22 = *(arg1 + 0x3c)
                    
                    if (rdx_22 != 0)
                        sub_142b95270(rcx + 0x18, neg.d(rdx_22), 0)
                    
                    sub_142b94c20(rcx + 0x18, &var_50)
                    int32_t var_48
                    int32_t rcx_39 = (var_48 + 0x3f) & 0xffffffc0
                    int32_t r9_6 = var_50.d & 0xffffffc0
                    int32_t var_48_1 = rcx_39
                    int32_t rdx_26 = var_50:4.d & 0xffffffc0
                    *(rsi + 0x38) = r9_6
                    *(rsi + 0x30) = rcx_39 - r9_6
                    int32_t var_44
                    int32_t r8_13 = (var_44 + 0x3f) & 0xffffffc0
                    int32_t rcx_42 = var_88.d + r9_6
                    *(rsi + 0x3c) = r8_13
                    var_50.d = r9_6
                    *(rsi + 0x44) = rcx_42 & 0xffffffc0
                    int32_t rcx_45 = var_88:4.d + r8_13
                    *(rsi + 0x34) = r8_13 - rdx_26
                    var_50:4.d = rdx_26
                    *(rsi + 0x48) = rcx_45 & 0xffffffc0
                    int32_t var_44_1 = r8_13
                    
                    if (var_60 == 1)
                    label_142ba677d:
                        
                        if (*(rsi + 0x40) != 0)
                            *(rsi + 0x40) = *(arg1 + 0x44) - *(arg1 + 0x3c)
                    else if ((*(*(rsi + 8) + 8) & 4) != 0)
                        *(rsi + 0x40) = sub_142b93e80(*(rsi + 0x40), r14_1[2].d)
                        *(rsi + 0xdc) = 0
                    else
                        void* rax_44 = arg1[1]
                        uint64_t rcx_47 = zx.q(arg4)
                        
                        if (rcx_47.d u>= *(rax_44 + 8))
                            goto label_142ba677d
                        
                        uint16_t rdx_27
                        rdx_27.b = (*(*(rax_44 + 0x10) + (rcx_47 << 1)) u>> 0xf).b & 1
                        
                        if (rdx_27.b == 0 || r14_1[5].b == 0)
                            goto label_142ba677d
                        
                        *(rsi + 0x40) = sub_142b93e80(*(rsi + 0x40), r14_1[2].d)
                        *(rsi + 0xdc) = 0
                    
                    int32_t rax_49 = sub_142b93e80(*(rsi + 0x4c), *(r14_1 + 0x14))
                    __builtin_strncpy(rsi + 0x60, "ltuo", 4)
                    *(rsi + 0x40) = (*(rsi + 0x40) + 0x20) & 0xffffffc0
                    *(rsi + 0x4c) = (rax_49 + 0x20) & 0xffffffc0
                    result = result_2

__security_check_cookie(rax_1 ^ &var_a8)
return result
