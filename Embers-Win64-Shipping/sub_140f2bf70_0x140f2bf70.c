// 函数: sub_140f2bf70
// 地址: 0x140f2bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* arg_18 = arg3
*arg2 = 0
arg2[1] = 0
int32_t rax_1 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
arg2[1].d = 0

if (*(arg2 + 0xc) != rax_1)
    arg4 = sub_1405c55e0(arg2, rax_1)

int32_t rdi = *(arg1 + 0x2d8)
int32_t r14 = 0
int128_t zmm12 = zx.o(0)
int32_t arg_10 = rdi
int128_t zmm13 = zx.o(0)
int128_t zmm6 = zx.o(0)
int32_t rbp = 0
int32_t rax_3
int64_t rcx_3
rax_3, rcx_3 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
char arg_8
int32_t arg_20

if (rax_3 s> 0)
    int64_t* rsi_1 = nullptr
    int32_t rax_21
    
    do
        char* rbx_2 = *(*(rsi_1 + *(arg1 + 0x2b8)) + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_5 = *(rbx_2 + 8)
            
            if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                int64_t* rcx_6
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_6 = nullptr
                else
                    rcx_6 = *(rbx_2 + 8)
                
                (*(*rcx_6 + 0x48))(rcx_6, &arg_8)
                *rbx_2 = arg_8
        
        if (*rbx_2 != data_1439ae51d)
            r14 += 1
            void* rdi_1 = *(rsi_1 + *(arg1 + 0x2b8))
            
            if (*(rdi_1 + 0x30) != 0)
                int64_t* rcx_7 = *(rdi_1 + 0x28)
                
                if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                    int64_t* rcx_8
                    
                    if (*(rdi_1 + 0x30) == 0)
                        rcx_8 = nullptr
                    else
                        rcx_8 = *(rdi_1 + 0x28)
                    
                    *(rdi_1 + 0x20) = (*(*rcx_8 + 0x48))(rcx_8)
            
            void* rbx_3 = *(rsi_1 + *(arg1 + 0x2b8))
            
            if (*(rdi_1 + 0x20) != 0)
                if (*(rbx_3 + 0x48) != 0)
                    int64_t* rcx_10 = *(rbx_3 + 0x40)
                    
                    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                        int64_t* rcx_11
                        
                        if (*(rbx_3 + 0x48) == 0)
                            rcx_11 = nullptr
                        else
                            rcx_11 = *(rbx_3 + 0x40)
                        
                        (*(*rcx_11 + 0x48))(rcx_11)
                        *(rbx_3 + 0x38) = arg4.d
                
                zmm13.d = zmm13.d f+ *(rbx_3 + 0x38)
                rdi = arg_10
            else
                int64_t* rax_16
                rax_16, arg4 = sub_140e13cf0(*(rbx_3 + 0x10), &arg_20)
                rdi = arg_10
                
                if (rdi != 0)
                    rax_16 += 4
                
                zmm6.d = zmm6.d f+ *rax_16
        
        rbp += 1
        rsi_1 = &rsi_1[1]
        rax_21, rcx_3 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (rbp s< rax_21)

int32_t rdx_3 = r14 - 1
uint128_t* r14_1 = arg_18
int64_t rax_23 = *(arg1 + 0x2a8)
int32_t rbp_1 = 0

if (rdx_3 s<= 0)
    rdx_3 = 0

int128_t zmm9 = *((zx.q((sbb.q(rcx_3, rcx_3, rdi != 0)).d) & 4) + r14_1)
arg4.d = _mm_cvtepi32_ps(zx.o(rdx_3)).d f* *(arg1 + 0x304)
zmm9.d = zmm9.d f- arg4.d
zmm9.d = zmm9.d f- zmm6.d

if ((*rax_23)(arg1 + 0x2a8) s> 0)
    arg4 = 0x3f800000
    void** rsi_2 = nullptr
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int32_t var_e0_1 = 0x3f800000
    int32_t rax_45
    
    do
        void* rbx_4 = *(rsi_2 + *(arg1 + 0x2b8))
        
        if (*(rbx_4 + 0x30) != 0)
            int64_t* rcx_16 = *(rbx_4 + 0x28)
            
            if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
                int64_t* rcx_17
                
                if (*(rbx_4 + 0x30) == 0)
                    rcx_17 = nullptr
                else
                    rcx_17 = *(rbx_4 + 0x28)
                
                *(rbx_4 + 0x20) = (*(*rcx_17 + 0x48))(rcx_17)
        
        if (*(rbx_4 + 0x20) != 0)
            if (*(rbx_4 + 0x48) != 0)
                int64_t* rcx_19 = *(rbx_4 + 0x40)
                
                if (rcx_19 != 0 && (*(*rcx_19 + 0x28))(rcx_19) != 0)
                    int64_t* rcx_20
                    
                    if (*(rbx_4 + 0x48) == 0)
                        rcx_20 = nullptr
                    else
                        rcx_20 = *(rbx_4 + 0x40)
                    
                    (*(*rcx_20 + 0x48))(rcx_20)
                    *(rbx_4 + 0x38) = arg4.d
            
            zmm6.d = zmm9.d f* *(rbx_4 + 0x38)
            zmm6.d = zmm6.d f/ zmm13.d
        else
            void var_e8
            int64_t* rax_30 = sub_140e13cf0(*(rbx_4 + 0x10), &var_e8)
            
            if (rdi != 0)
                rax_30 += 4
            
            zmm6 = *rax_30
        
        char* rbx_6 = *(rbx_4 + 0x10) + 0x1a8
        
        if (*(rbx_6 + 0x10) != 0)
            int64_t* rcx_21 = *(rbx_6 + 8)
            
            if (rcx_21 != 0 && (*(*rcx_21 + 0x28))(rcx_21) != 0)
                int64_t* rcx_22
                
                if (*(rbx_6 + 0x10) == 0)
                    rcx_22 = nullptr
                else
                    rcx_22 = *(rbx_6 + 8)
                
                (*(*rcx_22 + 0x48))(rcx_22, &arg_18)
                *rbx_6 = arg_18.b
        
        int32_t rcx_23 = *(arg1 + 0x2d8)
        char rdi_2 = *rbx_6
        
        if (rcx_23 != 0)
            int32_t arg_c = zmm12.d
            arg_8.d = 0
        else
            arg_20 = zmm12.d
            int32_t arg_24 = rcx_23
        
        char* rax_38 = &arg_8
        
        if (rcx_23 == 0)
            rax_38 = &arg_20
        
        float zmm1 = *rax_38
        int32_t zmm2 = *(rax_38 + 4)
        int32_t* rax_39
        
        if (rcx_23 != 0)
            int32_t var_f0
            rax_39 = &var_f0
            var_f0 = (*r14_1).d
            int32_t var_ec_1 = zmm6.d
        else
            int32_t var_f8
            rax_39 = &var_f8
            int32_t var_f4_1 = (*(r14_1 + 4)).d
            var_f8 = zmm6.d
        
        int64_t rbx_7 = sx.q(arg2[1].d)
        zmm7 = *rax_39
        zmm8 = rax_39[1]
        float var_dc_1 = zmm1
        int32_t rax_40 = (rbx_7 + 1).d
        arg2[1].d = rax_40
        
        if (rax_40 s> *(arg2 + 0xc))
            sub_1405c4d20(arg2)
        
        int64_t rcx_25 = *arg2
        int64_t rdx_7 = rbx_7 * 5
        arg4 = zx.o(var_e0_1.q)
        *(rcx_25 + (rdx_7 << 2)) = arg4.q
        *(rcx_25 + (rdx_7 << 2) + 8) = zmm2
        *(rcx_25 + (rdx_7 << 2) + 0xc) = zmm7.d
        *(rcx_25 + (rdx_7 << 2) + 0x10) = zmm8.d
        
        if (rdi_2 != data_1439ae51d)
            zmm6.d = zmm6.d f* 2f
            zmm1 = *(arg1 + 0x304) * 2f f+ zmm6.d + 0.5f
            arg4 = _mm_cvtepi32_ps(zx.o(int.d(zmm1) s>> 1))
            zmm12.d = zmm12.d f+ arg4.d
        
        rbp_1 += 1
        rsi_2 = &rsi_2[1]
        rax_45 = (**(arg1 + 0x2a8))(arg1 + 0x2a8, zmm1)
        rdi = arg_10
    while (rbp_1 s< rax_45)

return arg2
