// 函数: sub_141af3fd0
// 地址: 0x141af3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t r8 = 0
uint64_t result = zx.q(*(arg1 + 4)) & 1

if (result.d != 0)
    arg3 = zx.o(0)
    
    if (0f f== *(arg1 + 8))
        goto label_141af402a
    
    goto label_141af4004

int32_t var_40

if ((arg1[1].b & 1) == 0)
label_141af4004:
    
    if (result.d == 0)
        arg3 = var_40
    else
        r8 = 1
        arg3.d = (*arg1).d f/ *(arg1 + 8)
else
label_141af402a:
    
    if (*(arg1 + 0x1c) == 0)
        *(arg1 + 0x18) = 0
        int32_t r9_1 = -1
        *(arg1 + 0x1c) = 1
        void* rdx = arg2[2]
        int32_t var_48_1 = 0xffffffff
        int32_t var_44_1 = 0
        int64_t rbx_1
        
        if (rdx == 0)
            rbx_1 = var_48_1.q
        else
            arg3 = sub_140d3a3a0(&var_40, rdx)
            rbx_1 = var_40.q
            var_48_1.q = rbx_1
            r8 = var_44_1
            r9_1 = var_48_1
        
        int64_t* r10_1 = *arg2
        int32_t* rdx_1 = r10_1[3]
        void* rax_4 = &rdx_1[sx.q(r10_1[4].d) * 3]
        int128_t zmm6
        
        if (rdx_1 == rax_4)
        label_141af40c6:
            (*(*r10_1 + 0x28))(r10_1, arg2[2], arg2[3], r9_1, var_48_1)
            zmm6 = arg3
            
            if (arg2[3] != 0)
                void* rsi_1 = *arg2
                int64_t rbp_1 = sx.q(*(rsi_1 + 0x20))
                int32_t rax_6 = (rbp_1 + 1).d
                *(rsi_1 + 0x20) = rax_6
                
                if (rax_6 s> *(rsi_1 + 0x24))
                    sub_14083a7e0(rsi_1 + 0x18)
                
                int64_t rax_7 = *(rsi_1 + 0x18)
                int64_t rcx_5 = rbp_1 * 3
                *(rax_7 + (rcx_5 << 2) + 8) = zmm6.d
                *(rax_7 + (rcx_5 << 2)) = rbx_1
        else
            while (*rdx_1 != r9_1 || rdx_1[1] != r8)
                rdx_1 = &rdx_1[3]
                
                if (rdx_1 == rax_4)
                    goto label_141af40c6
            
            zmm6 = rdx_1[2]
        
        int32_t var_44_2 = 1
        result = zmm6.d.q
        *(arg1 + 0x14) = result
    
    arg3 = *(arg1 + 0x14)
    r8 = 1

if ((arg1[1].b & 1) != 0)
    int128_t zmm1 = *(arg1 + 0xc)
    
    if (r8 == 0)
        arg3 = zmm1
    else
        arg3.d = arg3.d f+ zmm1.d
    
    r8 = 1

if (r8 == 0)
    (*(**arg2 + 0x28))(arg3, arg2[2], arg2[3])
    int32_t var_44_3 = 1
    result = arg3.d.q
    var_40.q = result

__security_check_cookie(rax_1 ^ &var_68)
return result
