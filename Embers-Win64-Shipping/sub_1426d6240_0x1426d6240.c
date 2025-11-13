// 函数: sub_1426d6240
// 地址: 0x1426d6240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rsi = *(arg2 + 0xc0)
*(arg1 + 0x80) = arg2
*(arg1 + 0xa8) = 0
int64_t result

if (*(arg1 + 0x70) == 0 || rsi == 0)
    result = 1
else
    void* rbx_1 = rsi[0x4a]
    int64_t* rbx_2
    
    if (rbx_1 != 0)
        void* rax_2 = sub_1424890f0()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            int64_t* rbx_3 = rsi[0x4a]
            int64_t rax_5 = sub_142591550()
            int64_t r8_2 = *rbx_3
            rbx_2 = (*(r8_2 + 0x610))(rbx_3, rax_5, r8_2)
        else
            rbx_2 = *(rbx_1 + 0x280)
    
    if (rbx_1 == 0 || rbx_2 == 0)
        result = 1
    else
        int32_t rax_7 = sub_141f3ba00(rbx_2)
        int64_t rdx_2 = *(arg1 + 0x70)
        char r8_3 = *(arg1 + 0x78) & 1
        *(arg1 + 0x90) = rax_7
        *(arg1 + 0x88) = rbx_2
        int128_t zmm0_1 = sub_141f444b0(rbx_2, rdx_2, r8_3)
        int64_t* rcx_4 = *(arg1 + 0x70)
        (*(*rcx_4 + 0x268))(rcx_4)
        char rax_9 = (*(arg1 + 0x78)).b
        
        if ((rax_9 & 2) != 0 || zmm0_1.d f<= 0f)
            result = 0
        else
            if ((rax_9 & 1) == 0)
                void* rax_11 = (*(*rsi + 0x150))(rsi)
                void* rcx_6 = *(rax_11 + 0x188)
                void* rbx_4
                
                if (rcx_6 == 0)
                    rbx_4 = *(rax_11 + 0x300)
                else
                    rbx_4 = *(rcx_6 + 0xc0)
                
                int64_t var_98 = 0
                int32_t var_90_1 = 0
                
                if (arg1 + 0x98 != &var_98 && *(arg1 + 0xa0) != 0)
                    int64_t* rcx_7 = *(arg1 + 0x98)
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x40))(rcx_7, &var_98)
                
                void var_88
                sub_140d3a3a0(&var_88, nullptr)
                int64_t var_80_1 = 0
                int64_t var_78_1 = 0
                void* var_68_1 = nullptr
                sub_1423e6200(rbx_4, arg1 + 0xa8, &var_98, zmm0_1, 0, 0xbf800000)
                
                if (var_78_1 != 0)
                    void var_58
                    void* rcx_10 = &var_58
                    
                    if (var_68_1 != 0)
                        rcx_10 = var_68_1
                    
                    (*(*rcx_10 + 0x10))(rcx_10)
                
                sub_140745b20(&var_98)
            
            result = 3

__security_check_cookie(rax_1 ^ &var_c8)
return result
