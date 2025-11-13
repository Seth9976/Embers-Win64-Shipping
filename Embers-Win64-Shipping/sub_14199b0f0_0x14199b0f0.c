// 函数: sub_14199b0f0
// 地址: 0x14199b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* result = arg2
int64_t* var_c0 = nullptr
int64_t var_b8 = 0
int64_t rax_2 = 0
*result = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    rax_2 = *(arg1 + 8)

int64_t rbx = rax_2
int64_t rax_7
int32_t i

for (i = rax_2.d & 0x3ffffff; i != 0; i = rax_7.d & 0x3ffffff)
    if ((((rbx & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (rbx & 0xfffffffffc000000))
        sub_140a2c900()
    
    bool z_1
    
    if (rbx == *(arg1 + 8))
        *(arg1 + 8) = (rbx & 0xfffffffffc000000) + 0x4000000
        z_1 = true
    else
        *(arg1 + 8)
        z_1 = false
    
    if (z_1)
        break
    
    rax_7 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_7 = *(arg1 + 8)
    
    rbx = rax_7

if (i != 0)
    uint64_t rsi_4 = zx.q(var_b8.d)
    void* rdx_1
    int64_t* rbx_2
    
    do
        int64_t rbx_1 = sx.q(rsi_4.d)
        uint64_t rcx_4 = (zx.q(i) & 0x3fff) * 3
        int64_t rax_10 = *(&data_143cf0bf8 + (zx.q(i) u>> 0xe << 3))
        int64_t r15_1 = *(rax_10 + (rcx_4 << 3) + 8)
        rsi_4 = zx.q((rbx_1 + 1).d)
        var_b8.d = rsi_4.d
        
        if (rsi_4.d s> var_b8:4.d)
            sub_1405a4d70(&var_c0)
            rsi_4 = zx.q(var_b8.d)
        
        int32_t i_2 = i
        rbx_2 = var_c0
        rbx_2[rbx_1] = r15_1
        i = *(rax_10 + (rcx_4 << 3) + 0x10)
        sub_140a24050(i_2)
        rdx_1 = nullptr
    while (i != 0)
    
    result = arg2
    
    if (rsi_4.d != 0)
        void* var_50_1 = nullptr
        int32_t i_4 = 0
        int32_t rcx_6 = 4
        int32_t var_44_1 = 4
        int32_t i_5 = 0
        void var_70
        
        if (rsi_4.d s> 0)
            while (true)
                i_4 = i_5 + 1
                
                if (i_5 + 1 s> rcx_6)
                    sub_14083a490(&var_70, i_5)
                    rdx_1 = var_50_1
                
                void* rcx_8 = &var_70
                
                if (rdx_1 != 0)
                    rcx_8 = rdx_1
                
                void* rdx_3 = rcx_8 + (sx.q(i_5) << 3)
                
                if (rdx_3 != 0)
                    void* rax_14 = *rbx_2
                    *rdx_3 = rax_14
                    
                    if (rax_14 != 0)
                        *(rax_14 + 0x48) += 1
                
                int64_t* rcx_9 = *rbx_2
                rcx_9[9].d -= 1
                
                if (rcx_9[9].d == 1)
                    sub_140a2f6e0(rcx_9)
                
                rbx_2 = &rbx_2[1]
                uint64_t temp1_1 = rsi_4
                rsi_4 -= 1
                
                if (temp1_1 == 1)
                    break
                
                rcx_6 = var_44_1
                i_5 = i_4
                rdx_1 = var_50_1
        
        int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)
        int64_t* var_a8 = rax_16
        int64_t* rbx_3 = rax_16
        
        if (rax_16 != 0)
            rbx_3[1] = arg1
            *rbx_3 = &data_142d3fe58
            rbx_3[2] = sub_141998730
            rbx_3[4] = sub_140a387b0()
            *rbx_3 = &data_142d3feb0
        
        void var_88
        int64_t* rax_18 = sub_14199c5a0(&var_88, &var_70, arg3)
        int64_t* rdi_3 = *rax_18 + 0x10
        *rdi_3 = 0
        rdi_3[1].d = 0
        
        if (&var_a8 != rdi_3 && rbx_3 != 0)
            int64_t r8_1 = *rbx_3
            (*(r8_1 + 0x40))(rbx_3, rdi_3, r8_1)
        
        rdi_3[2].d = 0x6ff
        void* rcx_12 = *rax_18
        int32_t r8_2 = rax_18[2].d
        int64_t* rdx_6 = rax_18[1]
        int64_t* rdi_4 = *(rcx_12 + 0x30)
        int64_t* var_98 = rdi_4
        
        if (rdi_4 != 0)
            rdi_4[9].d += 1
            rbx_3 = var_a8
        
        sub_140978a40(rcx_12, rdx_6, r8_2, 1)
        
        if (result != &var_98)
            int64_t* rcx_13 = *result
            *result = rdi_4
            
            if (rcx_13 != 0)
                rcx_13[9].d -= 1
                
                if (rcx_13[9].d != 1)
                    rbx_3 = var_a8
                else
                    sub_140a2f6e0(rcx_13)
                    rbx_3 = var_a8
        else if (rdi_4 != 0)
            rdi_4[9].d -= 1
            
            if (rdi_4[9].d != 1)
                rbx_3 = var_a8
            else
                sub_140a2f6e0(var_98)
                rbx_3 = var_a8
        
        if (rbx_3 != 0)
            (*(*rbx_3 + 0x38))(rbx_3, 0)
            int64_t* rax_22 = sub_140a84c80(rbx_3, 0, 0)
            var_a8 = rax_22
            
            if (rax_22 != 0)
                sub_140a74f90(rax_22)
        
        void* rcx_18 = var_50_1
        void* rbx_4 = &var_70
        int32_t i_3 = i_4
        
        if (rcx_18 != 0)
            rbx_4 = rcx_18
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_17 = *rbx_4
                
                if (rcx_17 != 0)
                    rcx_17[9].d -= 1
                    
                    if (rcx_17[9].d == 1)
                        sub_140a2f6e0(rcx_17)
                
                rbx_4 += 8
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rcx_18 = var_50_1
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    int64_t* rbx_5 = var_c0
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)

__security_check_cookie(rax_1 ^ &var_e8)
return result
