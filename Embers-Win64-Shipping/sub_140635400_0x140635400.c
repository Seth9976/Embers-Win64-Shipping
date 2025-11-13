// 函数: sub_140635400
// 地址: 0x140635400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg4
uint64_t* rsi = arg3
int32_t i_2 = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405dadb0(arg1, 0)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405dadb0(arg2, 0)

rsi[1].d = 0

if (*(rsi + 0xc) != 0)
    sub_1405dadb0(rsi, 0)

int64_t* rcx_2 = data_143f0f180
void* var_98 = nullptr
int32_t var_90 = 0
int64_t* r12 = nullptr
int64_t* var_58 = nullptr
int32_t var_4c = 0
void* rax_3

if ((*(*rcx_2 + 0x428))(rcx_2, &var_98, 0) == 0)
    rax_3 = var_98
    rdi = 0
else
    rax_3 = var_98
    void* i = rax_3 + sx.q(var_90) * 0xc
    
    if (rax_3 != i)
        int32_t* r15_1 = rax_3 + 8
        
        do
            int32_t rdx_1 = r15_1[-2]
            int16_t* var_a8 = nullptr
            int32_t var_a0_1 = 0
            int64_t var_88 = 0
            int32_t var_80_1 = 0
            sub_140a20c40(&var_88, rdx_1)
            int32_t r8 = var_80_1 - 1
            
            if (var_80_1 == 0)
                r8 = 0
            
            sub_140a20ba0(&var_a8, var_88, r8)
            int64_t rcx_6 = var_88
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int32_t rdx_3 = r15_1[-1]
            int64_t var_78 = 0
            int32_t var_70_1 = 0
            sub_140a20c40(&var_78, rdx_3)
            int32_t r8_1 = var_70_1 - 1
            
            if (var_70_1 == 0)
                r8_1 = 0
            
            sub_140a20ba0(&var_a8, var_78, r8_1)
            int64_t rcx_9 = var_78
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            if (rdi != 0)
                int32_t rdx_5 = *r15_1
                int64_t var_68 = 0
                int32_t var_60_1 = 0
                sub_140a20c40(&var_68, rdx_5)
                int32_t r8_2 = var_60_1 - 1
                
                if (var_60_1 == 0)
                    r8_2 = 0
                
                sub_140a20ba0(&var_a8, var_68, r8_2)
                int64_t rcx_12 = var_68
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
            
            int64_t* rbx_1 = r12
            void* rdi_3 = &r12[sx.q(i_2) * 2]
            
            if (r12 == rdi_3)
            label_1406355f8:
                int64_t* rbx_2 = r12
                
                if (r12 != rdi_3)
                    while (true)
                        int16_t* const rdx_8 = &data_142d40450
                        
                        if (var_a0_1 != 0)
                            rdx_8 = var_a8
                        
                        int16_t* const rcx_14
                        
                        if (rbx_2[1].d == 0)
                            rcx_14 = &data_142d40450
                        else
                            rcx_14 = *rbx_2
                        
                        if (sub_140a54510(rcx_14, rdx_8) == 0)
                            break
                        
                        rbx_2 = &rbx_2[2]
                        
                        if (rbx_2 == rdi_3)
                            goto label_140635642
                
                if (r12 == rdi_3 || ((rbx_2 - r12) s>> 4).d == 0xffffffff)
                label_140635642:
                    int64_t i_3 = sx.q(i_2)
                    i_2 = (i_3 + 1).d
                    
                    if (i_2 s> var_4c)
                        sub_1405a4f90(&var_58)
                        r12 = var_58
                    
                    void* rbx_6 = &r12[i_3 * 2]
                    *rbx_6 = 0
                    int16_t* rsi_1 = var_a8
                    *(rbx_6 + 8) = var_a0_1
                    
                    if (var_a0_1 != 0)
                        sub_1405a4c70(rbx_6, var_a0_1, 0)
                        memcpy(*rbx_6, rsi_1, var_a0_1 * 2)
                    else
                        *(rbx_6 + 0xc) = 0
                    
                    rsi = arg3
                
                int64_t rbx_7 = sx.q(arg1[1].d)
                int32_t rdi_5 = r15_1[-2]
                int32_t rax_9 = (rbx_7 + 1).d
                arg1[1].d = rax_9
                
                if (rax_9 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                *(*arg1 + (rbx_7 << 2)) = rdi_5
                int64_t rbx_8 = sx.q(arg2[1].d)
                int32_t rdi_6 = r15_1[-1]
                int32_t rax_11 = (rbx_8 + 1).d
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_1405a4cf0(arg2)
                
                *(*arg2 + (rbx_8 << 2)) = rdi_6
                int64_t rbx_10 = sx.q(rsi[1].d)
                int32_t rdi_7 = *r15_1
                int32_t rax_13 = (rbx_10 + 1).d
                rsi[1].d = rax_13
                
                if (rax_13 s> *(rsi + 0xc))
                    sub_1405a4cf0(rsi)
                
                *(*rsi + (rbx_10 << 2)) = rdi_7
            else
                while (true)
                    int16_t* const rdx_7 = &data_142d40450
                    
                    if (var_a0_1 != 0)
                        rdx_7 = var_a8
                    
                    int16_t* const rcx_13
                    
                    if (rbx_1[1].d == 0)
                        rcx_13 = &data_142d40450
                    else
                        rcx_13 = *rbx_1
                    
                    if (sub_140a54510(rcx_13, rdx_7) == 0)
                        break
                    
                    rbx_1 = &rbx_1[2]
                    
                    if (rbx_1 == rdi_3)
                        goto label_1406355f8
            
            int16_t* rcx_22 = var_a8
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            rdi = arg4
            r15_1 = &r15_1[3]
        while (&r15_1[-2] != i)
        
        rax_3 = var_98
    
    rdi = 1

if (rax_3 != 0)
    sub_140a74f90(rax_3)

int64_t* rbx_11 = r12

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_24 = *rbx_11
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx_11 = &rbx_11[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rdi)
