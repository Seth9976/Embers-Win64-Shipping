// 函数: sub_140ecf970
// 地址: 0x140ecf970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
void* r15 = nullptr
int64_t* var_30 = nullptr
int32_t rdx = 0
void* var_38 = nullptr
int32_t i = 0

if (*(arg1 + 0x80) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = *(arg1 + 0x78) + r14_1
        int64_t rcx = *rdi_2
        
        if (rcx != 0)
            void* rax_1 = rdi_2[1]
            
            if (rax_1 != 0 && *(rax_1 + 8) s> 0)
                int64_t i_4 = sx.q(i_3)
                i_3 = (i_4 + 1).d
                var_30.d = i_3
                
                if (i_3 s> rdx)
                    sub_1405a4f90(&var_38)
                    rcx = *rdi_2
                    rdx = var_30:4.d
                    i_3 = var_30.d
                    r15 = var_38
                
                int64_t rax_3 = i_4 * 2
                *(r15 + (rax_3 << 3)) = rcx
                void* rcx_2 = rdi_2[1]
                *(r15 + (rax_3 << 3) + 8) = rcx_2
                
                if (rcx_2 != 0)
                    *(rcx_2 + 0xc) += 1
        
        i += 1
        r14_1 += 0x10
    while (i s< *(arg1 + 0x80))

sub_140e998a0(arg1 + 0x78, &var_38)

if (i_3 != 0)
    int64_t* rdi_3 = r15 + 8
    int32_t i_1
    
    do
        int64_t* rcx_4 = *rdi_3
        
        if (rcx_4 != 0)
            int32_t temp1_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t* result = sub_140ed8620(arg1)
int32_t i_2 = 0

if (*(arg1 + 0x80) s> 0)
    int64_t r14_2 = 0
    
    do
        void** rcx_7 = *(arg1 + 0x78)
        void* const r8_1 = nullptr
        int64_t* rbx = *(rcx_7 + r14_2 + 8)
        
        if (rbx != 0)
            int32_t rax_5 = rbx[1].d
            
            if (rax_5 == 0)
                rbx = nullptr
            else
                rbx[1].d = rax_5 + 1
                
                if (rbx != 0)
                    r8_1 = *(rcx_7 + r14_2)
        
        result = sub_140ebf640(r8_1, &var_38)
        void* rcx_9 = var_38
        
        if (rcx_9 != 0)
            result = sub_140e21770(rcx_9)
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                result = (**var_30)(var_30)
                int32_t temp4_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*var_30 + 8))(var_30, 1)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                result = (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx + 8))(rbx, 1)
        
        i_2 += 1
        r14_2 += 0x10
    while (i_2 s< *(arg1 + 0x80))

return result
