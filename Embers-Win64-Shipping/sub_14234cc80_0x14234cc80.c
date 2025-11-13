// 函数: sub_14234cc80
// 地址: 0x14234cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbp = arg1
void arg_10
sub_141992c00(&arg_10, 1)
int32_t rdi = 0
*(rbp + 0xa8) = arg3
*(rbp + 0xac) = arg4
void* rsi = rbp + 0x10
*(rbp + 0xb4) = arg5

if (rbp == 8)
    rsi = nullptr

sub_141997f50(rsi)
void* var_88

if (arg2 != 0)
    var_88 = rbp + 0x2b0
    void* var_80_1 = rbp + 0x2e8
    
    if (sub_140a80f40() == 0)
        uint32_t rax_24
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_24.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_24.b == 0))
            void var_48
            int64_t* rax_25 = sub_142331da0(&var_48, nullptr, 0xff)
            *(*rax_25 + 0x10) = var_88.o
            void* rcx_21 = *rax_25
            int32_t r8_2 = rax_25[2].d
            int64_t* rdx_8 = rax_25[1]
            int64_t* rbx_7 = *(rcx_21 + 0x28)
            int64_t* arg_8 = rbx_7
            int32_t* rdi_1 = &rbx_7[9]
            
            if (rbx_7 != 0)
                *rdi_1 += 1
                rbx_7 = arg_8
            
            sub_1405e48c0(rcx_21, rdx_8, r8_2, 1)
            
            if (rbx_7 != 0)
                int32_t rax_26 = *rdi_1
                *rdi_1 -= 1
                
                if (rax_26 == 1)
                    sub_140a2f6e0(arg_8)
        else
            int128_t var_58 = var_88.o
            sub_14232ce60(&var_58)
    else
        int32_t i = 0
        
        if (*(rbp + 0x2b8) s> 0)
            int64_t* rbx_6 = nullptr
            
            do
                int64_t rax_22 = *(rbp + 0x2b0)
                int64_t* rcx_16 = *(rbx_6 + rax_22)
                
                if (rcx_16 != 0)
                    (*(*rcx_16 + 0x18))(rcx_16, 1)
                    rax_22 = *(rbp + 0x2b0)
                
                *(rbx_6 + rax_22) = 0
                i += 1
                rbx_6 = &rbx_6[1]
            while (i s< *(rbp + 0x2b8))
        
        int64_t* rcx_17 = *(rbp + 0x2e8)
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x18))(rcx_17, 1)
        
        *(rbp + 0x2e8) = 0
else
    sub_141997e80(rsi)
    
    if (*(rbp + 0x27f) == 0 && *(rbp + 0x280) == 0)
        int64_t* rcx_3 = data_143e29f28
        int64_t* rbx_1 = *(rbp + 0x250)
        int64_t* rsi_1 = rcx_3[4]
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 != 0)
                rbx_1[1].d = rax_1 + 1
                rax_1.b = 1
            
            if (rax_1.b == 0)
                rbx_1 = nullptr
        
        int64_t rax_2 = 0
        
        if (rbx_1 != 0)
            rax_2 = *(rbp + 0x248)
        
        int64_t var_78 = rax_2
        int64_t* var_70_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        (*(*rcx_3 + 0x28))(rcx_3, &var_88, &var_78)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        void** rax_7 = (*(*rsi_1 + 0xa0))(rsi_1, var_88)
        
        if (rax_7 != 0)
            sub_1405d16e0(rbp + 0x98, *rax_7)
        
        uint128_t zmm0_2 = var_88.o
        uint128_t var_68 = zmm0_2
        void* rax_8 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        (*(*rsi_1 + 0x30))(rsi_1, &var_68, zx.q(arg3), zx.q(arg4))
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp5_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
    
    int32_t rdx_4 = data_143a302f0
    
    if (rbp == 8)
        rbp = nullptr
    
    int32_t r14
    r14.b = 0
    int32_t rcx_12 = data_143a302fc + 1
    data_143a302fc = rcx_12
    int64_t rsi_2 = sx.q(rdx_4 - 1)
    
    if (rdx_4 - 1 s>= 0)
        int64_t rbx_4 = rsi_2 << 4
        int64_t temp1_1
        
        do
            int64_t rax_13 = data_143a302e8
            
            if (*(rbx_4 + rax_13 + 8) == 0)
                r14.b = 1
            else
                int64_t* rcx_13 = *(rbx_4 + rax_13)
                
                if (rcx_13 == 0)
                    r14.b = 1
                else if ((*(*rcx_13 + 0x50))(rcx_13, rbp, 0) == 0)
                    r14.b = 1
            
            rbx_4 -= 0x10
            temp1_1 = rsi_2
            rsi_2 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_12 = data_143a302fc
        rdx_4 = data_143a302f0
    
    data_143a302fc = rcx_12 - 1
    
    if (r14.b != 0 && rcx_12 - 1 s<= 0)
        int32_t rsi_3 = rdx_4
        
        if (rdx_4 s> 0)
            int64_t* rbx_5 = nullptr
            
            do
                int64_t rax_16 = data_143a302e8
                
                if (*(rbx_5 + rax_16 + 8) == 0)
                    sub_1405a4880(&data_143a302e8, rdi, 1, 1)
                else
                    int64_t* rcx_15 = *(rbx_5 + rax_16)
                    
                    if (rcx_15 == 0)
                        sub_1405a4880(&data_143a302e8, rdi, 1, 1)
                    else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                        sub_1405a4880(&data_143a302e8, rdi, 1, 1)
                    else
                        rdi += 1
                        rbx_5 = &rbx_5[2]
                
                rdx_4 = data_143a302f0
            while (rdi s< rdx_4)
        
        int32_t rax_19 = rdx_4 * 2
        
        if (rax_19 s<= 2)
            rax_19 = 2
        
        data_143a302f8 = rax_19
        
        if (rsi_3 s> rax_19 && data_143a302f4 != rdx_4)
            sub_1405a5410(&data_143a302e8, rdx_4)
return sub_141994c70(&arg_10)
