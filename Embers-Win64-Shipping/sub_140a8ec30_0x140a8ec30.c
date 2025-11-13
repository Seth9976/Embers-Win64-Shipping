// 函数: sub_140a8ec30
// 地址: 0x140a8ec30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 8)
void* r14_2 = &rsi[sx.q(*(arg1 + 0x10)) * 2]
int16_t* var_70 = nullptr
int16_t* const r15 = &data_142d40450
int32_t var_68 = 0
int64_t* arg_20 = rsi
void* var_88 = r14_2

if (rsi != r14_2)
    do
        int64_t* rbx_1 = rsi[1]
        int64_t* rcx = *rsi
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_60
        int64_t* rax_2 = (*(*rcx + 8))(rcx, &var_60)
        void* const r12_1 = &data_142d7fa60
        
        if (var_68 s<= 1)
            r12_1 = &data_142d40450
        
        int32_t rax_11
        int64_t r15_1
        
        if (*r12_1 == 0)
            r15_1 = *rax_2
            *rax_2 = 0
            rax_11 = rax_2[1].d
            rax_2[1] = 0
        else
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (*(r12_1 + (rdi_2 << 1)) != 0)
            
            int32_t rax_3 = rax_2[1].d
            int32_t rsi_1 = rax_3 - 1
            
            if (rax_3 == 0)
                rsi_1 = 0
            
            int64_t var_80 = 0
            r15_1 = 0
            int64_t var_78_1 = 0
            int32_t rdx_1 = 0
            int32_t rcx_1 = 0
            int32_t rax_5 = (rdi_2 + 1).d + rsi_1
            
            if (rax_5 s> 0)
                sub_1405947f0(&var_80, rax_5)
                rcx_1 = var_78_1:4.d
                rdx_1 = var_78_1.d
                r15_1 = var_80
            
            int32_t rax_8 = rdx_1 + 1 + rsi_1 + rdi_2.d
            int32_t arg_8 = rax_8
            var_78_1.d = rax_8
            
            if (rax_8 s> rcx_1)
                sub_140594770(&var_80)
                r15_1 = var_80
                arg_8 = var_78_1.d
            
            int64_t r14_3 = sx.q(rdi_2.d)
            int64_t rsi_2 = r14_3 * 2
            memcpy(r15_1, r12_1, rsi_2.d)
            int64_t rdi_3 = sx.q(rsi_1)
            memcpy(rsi_2 + r15_1, *rax_2, rdi_3.d * 2)
            rsi = arg_20
            r14_2 = var_88
            *(r15_1 + ((rdi_3 + r14_3) << 1)) = 0
            rax_11 = arg_8
            var_80 = 0
            int64_t var_78_2 = 0
        
        int32_t r8_3 = rax_11 - 1
        
        if (rax_11 == 0)
            r8_3 = 0
        
        sub_140a20ba0(&var_70, r15_1, r8_3)
        
        if (r15_1 != 0)
            int64_t* rcx_7 = data_143ddb3f0
            
            if (rcx_7 == 0)
                sub_140a750a0()
                rcx_7 = data_143ddb3f0
            
            (*(*rcx_7 + 0x30))(rcx_7, r15_1)
        
        int64_t rdi_4 = var_60
        
        if (rdi_4 != 0)
            int64_t* rcx_8 = data_143ddb3f0
            
            if (rcx_8 == 0)
                sub_140a750a0()
                rcx_8 = data_143ddb3f0
            
            (*(*rcx_8 + 0x30))(rcx_8, rdi_4)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi = &rsi[2]
        arg_20 = rsi
    while (rsi != r14_2)
    
    r15 = var_70
    
    if (var_68 == 0)
        r15 = &data_142d40450

sub_140a2e390(arg2, u"[%s]", r15)
int16_t* rbx_2 = var_70

if (rbx_2 != 0)
    int64_t* rcx_12 = data_143ddb3f0
    
    if (rcx_12 == 0)
        sub_140a750a0()
        rcx_12 = data_143ddb3f0
    
    (*(*rcx_12 + 0x30))(rcx_12, rbx_2)

return arg2
