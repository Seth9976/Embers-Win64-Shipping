// 函数: sub_140ecf460
// 地址: 0x140ecf460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1
void* const r15 = nullptr
void* rax = *arg2
void* const arg_20 = nullptr
int64_t* var_70
void* const var_60

if (rax != 0)
    var_60 = rax
    int64_t* rax_1 = arg2[1]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    int64_t rdi_1 = sx.q(sub_140e90ee0(arg1 + 0x150, &var_60))
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            int64_t rdx_1 = *rax_1
            (*rdx_1)(rax_1, rdx_1)
            int32_t temp2_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rax_1 + 8))(rax_1, 1)
    
    if (rdi_1.d != 0xffffffff)
        void* rcx_3 = nullptr
        void* rdx_4 = (rdi_1 << 5) + *(arg1 + 0x150)
        int64_t* rsi_2 = *(rdx_4 + 0x18)
        
        if (rsi_2 != 0)
            int32_t rax_4 = rsi_2[1].d
            
            if (rax_4 == 0)
                rsi_2 = nullptr
            else
                rsi_2[1].d = rax_4 + 1
                rcx_3 = *(rdx_4 + 0x10)
        
        int64_t* r12_1 = *(rcx_3 + 0xd8)
        void* const r13_1 = nullptr
        var_70 = r12_1
        int32_t i_5 = 0
        var_60 = nullptr
        int32_t r9_1 = 0
        int64_t var_58_2 = 0
        int32_t i = 0
        int64_t* r8_2 = *r12_1 + 0x78
        int64_t* var_78_1 = r8_2
        
        if (r8_2[1].d s> 0)
            int64_t r12_2 = 0
            
            do
                int64_t* rbx_3 = *r8_2 + r12_2
                int64_t rcx_4 = *rbx_3
                
                if (rcx_4 != 0)
                    void* rax_6 = rbx_3[1]
                    
                    if (rax_6 != 0 && *(rax_6 + 8) s> 0)
                        int64_t i_6 = sx.q(i_5)
                        i_5 = (i_6 + 1).d
                        var_58_2.d = i_5
                        
                        if (i_5 s> r9_1)
                            sub_1405a4f90(&var_60)
                            rcx_4 = *rbx_3
                            r9_1 = var_58_2:4.d
                            r8_2 = var_78_1
                            i_5 = var_58_2.d
                        
                        r13_1 = var_60
                        int64_t rax_8 = i_6 * 2
                        *(r13_1 + (rax_8 << 3)) = rcx_4
                        void* rdx_6 = rbx_3[1]
                        *(r13_1 + (rax_8 << 3) + 8) = rdx_6
                        
                        if (rdx_6 != 0)
                            *(rdx_6 + 0xc) += 1
                
                i += 1
                r12_2 += 0x10
            while (i s< r8_2[1].d)
            
            r12_1 = var_70
        
        sub_140e998a0(r8_2, &var_60)
        
        if (i_5 != 0)
            int64_t* rbx_4 = r13_1 + 8
            int32_t i_1
            
            do
                int64_t* rcx_7 = *rbx_4
                
                if (rcx_7 != 0)
                    int32_t temp6_1 = *(rcx_7 + 0xc)
                    *(rcx_7 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rcx_7 + 8))(rcx_7, 1)
                
                rbx_4 = &rbx_4[2]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        arg4 = sub_140edaf00(*r12_1 + 0x78, 1)
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp10_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
    
    sub_140f19e30(*arg2, arg4)
    r8 = arg1

void* rax_12 = *arg3

if (rax_12 != 0)
    var_60 = rax_12
    int64_t* rax_13 = arg3[1]
    
    if (rax_13 != 0)
        rax_13[1].d += 1
    
    int64_t rdi_2 = sx.q(sub_140e90ee0(r8 + 0x150, &var_60))
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            int64_t rdx_10 = *rax_13
            (*rdx_10)(rax_13, rdx_10)
            int32_t temp3_1 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_13 + 8))(rax_13, 1)
    
    if (rdi_2.d != 0xffffffff)
        void* const rcx_19 = nullptr
        void* rdx_13 = (rdi_2 << 5) + *(r8 + 0x150)
        int64_t* rsi_4 = *(rdx_13 + 0x18)
        
        if (rsi_4 != 0)
            int32_t rax_16 = rsi_4[1].d
            
            if (rax_16 == 0)
                rsi_4 = nullptr
            else
                rsi_4[1].d = rax_16 + 1
                rcx_19 = *(rdx_13 + 0x10)
        
        int64_t* r12_3 = *(rcx_19 + 0xd8)
        int32_t i_4 = 0
        var_70 = r12_3
        int32_t r8_3 = 0
        var_60 = nullptr
        int32_t i_2 = 0
        int64_t* var_58_3
        var_58_3.d = 0
        void* r13_2 = *r12_3
        var_58_3:4.d = 0
        
        if (*(r13_2 + 0x80) s> 0)
            int64_t r12_4 = 0
            
            do
                int64_t* rdi_4 = *(r13_2 + 0x78) + r12_4
                int64_t rcx_20 = *rdi_4
                
                if (rcx_20 != 0)
                    void* rax_18 = rdi_4[1]
                    
                    if (rax_18 != 0 && *(rax_18 + 8) s> 0)
                        int64_t i_7 = sx.q(i_4)
                        i_4 = (i_7 + 1).d
                        var_58_3.d = i_4
                        
                        if (i_4 s> r8_3)
                            sub_1405a4f90(&var_60)
                            rcx_20 = *rdi_4
                            r8_3 = var_58_3:4.d
                            i_4 = var_58_3.d
                            arg_20 = var_60
                        
                        r15 = arg_20
                        int64_t rax_21 = i_7 * 2
                        *(r15 + (rax_21 << 3)) = rcx_20
                        void* rdx_15 = rdi_4[1]
                        *(r15 + (rax_21 << 3) + 8) = rdx_15
                        
                        if (rdx_15 != 0)
                            *(rdx_15 + 0xc) += 1
                
                i_2 += 1
                r12_4 += 0x10
            while (i_2 s< *(r13_2 + 0x80))
            
            r12_3 = var_70
        
        sub_140e998a0(r13_2 + 0x78, &var_60)
        
        if (i_4 != 0)
            void* rdi_5 = r15 + 8
            int32_t i_3
            
            do
                int64_t* rcx_23 = *rdi_5
                
                if (rcx_23 != 0)
                    int32_t temp9_1 = *(rcx_23 + 0xc)
                    *(rcx_23 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rcx_23 + 8))(rcx_23, 1)
                
                rdi_5 += 0x10
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        sub_140edaf00(*r12_3 + 0x78, 0)
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t temp11_1 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)

var_60 = *arg3
void* rax_26 = arg3[1]
void* var_58_4 = rax_26

if (rax_26 != 0)
    *(rax_26 + 8) += 1

var_70 = *arg2
void* rax_28 = arg2[1]
void* var_68 = rax_28

if (rax_28 != 0)
    *(rax_28 + 8) += 1

return sub_140ea4aa0(arg1 + 0x188, &var_70, &var_60)
