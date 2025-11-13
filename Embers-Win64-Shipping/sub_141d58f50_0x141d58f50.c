// 函数: sub_141d58f50
// 地址: 0x141d58f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
*(arg1 + 0x10c) += 1
int32_t rax = *(arg1 + 0x100)
int32_t rcx = *(arg1 + 0x10c)
int64_t rsi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rdi_2 = rsi << 4
    int64_t temp1_1
    
    do
        int64_t rcx_1 = *(arg1 + 0xf8)
        
        if (*(rdi_2 + rcx_1 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_2 = *(rdi_2 + rcx_1)
            
            if (rcx_2 == 0)
                rbp.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, zx.q(arg2)) == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x10c)

uint64_t result = zx.q(rcx - 1)
*(arg1 + 0x10c) = result.d
int512_t zmm1

if (rbp.b != 0)
    result, zmm1 = sub_140599630(arg1 + 0xf8, 0)

if (arg2 - 1 u<= 8)
    result = sx.q(arg2 - 1)
    uint64_t var_38
    void var_28
    
    switch (result)
        case 0
            return sub_1405a9f90(arg1 + 0x38, 0)
        case 2
            sub_141d50720(*(arg1 + 0x110), *(arg1 + 0xa8), *(arg1 + 0xb8))
            void* rcx_8 = *(arg1 + 0x110)
            char rax_4
            
            if (*(rcx_8 + 0x68) != 0)
                rax_4 = *(rcx_8 + 0x61)
            
            int64_t rdx_1
            
            if (*(rcx_8 + 0x68) != 0 && rax_4 != 0)
                rdx_1.b = rax_4 == 1
            else if ((*(arg1 + 0xc4) & 2) == 0 || *(*(arg1 + 0xc8) + 0x30) != 1)
                rdx_1.b = 0
            else
                rdx_1.b = 1
            
            int64_t rdx_2 = sub_141d51050(rcx_8, rdx_1.b)
            zmm1.o = *(arg1 + 0xe0)
            int128_t zmm6
            int128_t zmm7
            sub_141d511e0(*(arg1 + 0x110), rdx_2, *(arg1 + 0xe4), 1, zmm6, zmm7)
            var_38.o = *sub_140ade170(arg1 + 0xe8, &var_28)
            sub_141d51250(*(arg1 + 0x110), &var_38, 1)
            *(*(arg1 + 0x110) + 0x30) = *(arg1 + 0xd8)
            int64_t* rax_8 = sub_140596d10(&var_28, *(arg1 + 0x110) + 0xf8)
            var_38 = 0
            int64_t var_30_1 = 0
            
            if (&var_38 != rax_8)
                int32_t rdi_3 = rax_8[1].d
                int64_t rbp_1 = *rax_8
                var_30_1.d = rdi_3
                
                if (rdi_3 != 0)
                    sub_1405a4c70(&var_38, rdi_3, 0)
                    memcpy(var_38, rbp_1, rdi_3 * 2)
            
            result = sub_1405a9f90(arg1 + 0x48, &var_38)
            uint64_t rcx_17 = var_38
            
            if (rcx_17 != 0)
                result = sub_140a74f90(rcx_17)
            
            int64_t rcx_18 = *rax_8
            
            if (rcx_18 != 0)
                result = sub_140a74f90(rcx_18)
            
            void* rcx_19 = *(arg1 + 0x110)
            
            if (*(rcx_19 + 0x68) != 0)
                result = zx.q(*(rcx_19 + 0x60))
            
            if (*(rcx_19 + 0x68) == 0 || result.b == 0)
                if (*(arg1 + 0xc1) != 0 || *(arg1 + 0x130) != 0)
                label_141d59188:
                    *(arg1 + 0x130) = 0
                    result = sub_141d510b0(rcx_19, 0x3f800000)
                    
                    if (result.b != 0)
                        void* rcx_20 = *(arg1 + 0x110)
                        
                        if (*(rcx_20 + 0x68) != 0 && *(rcx_20 + 0x58) != 0)
                            result = sub_141d4c4d0(rcx_20)
                            
                            if (result.b != 0)
                                void* rcx_21 = *(arg1 + 0x110)
                                return sub_141d50630(rcx_21, rcx_21 + 0x58)
            else if (result.b == 1)
                goto label_141d59188
        case 3
            int64_t* rax_9 = sub_140596d10(&var_28, *(arg1 + 0x110) + 0xf8)
            var_38 = 0
            int64_t var_30_2 = 0
            
            if (&var_38 != rax_9)
                int32_t rsi_2 = rax_9[1].d
                int64_t rbp_2 = *rax_9
                var_30_2.d = rsi_2
                
                if (rsi_2 != 0)
                    sub_1405a4c70(&var_38, rsi_2, 0)
                    memcpy(var_38, rbp_2, rsi_2 * 2)
            
            sub_1405a9f90(arg1 + 0x58, &var_38)
            uint64_t rcx_26 = var_38
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int64_t rcx_27 = *rax_9
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            if ((*(arg1 + 0xc4) & 2) == 0 || *(*(arg1 + 0xc8) + 0x30) == 1)
                result = zx.q(*(arg1 + 0xd0) + 1)
            
            if (((*(arg1 + 0xc4) & 2) != 0 && *(*(arg1 + 0xc8) + 0x30) != 1)
                    || result.d s< *(*(arg1 + 0xc8) + 0x30))
                return sub_141d59710(arg1)
        case 4
            sub_1405a9f90(arg1 + 0x28, 0)
            
            if ((*(arg1 + 0xc4) & 2) == 0 || *(*(arg1 + 0xc8) + 0x30) == 1)
                result = zx.q(*(arg1 + 0xd0) + 1)
            
            if (((*(arg1 + 0xc4) & 2) != 0 && *(*(arg1 + 0xc8) + 0x30) != 1)
                    || result.d s< *(*(arg1 + 0xc8) + 0x30))
                *(arg1 + 0x130) = 1
                return sub_141d59710(arg1)
        case 5
            return sub_1405a9f90(arg1 + 0x68, 0)
        case 6
            return sub_1405a9f90(arg1 + 0x78, 0)
        case 7
            return sub_1405a9f90(arg1 + 0x88, 0)
        case 8
            return sub_1405a9f90(arg1 + 0x98, 0)

return result
