// 函数: sub_14066ae90
// 地址: 0x14066ae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)
uint64_t* result = arg2
uint64_t var_88 = 0
int32_t r12 = 0
int32_t var_7c = 0

if (rcx != 0)
    int64_t* rax_1 = sub_140b74a70(rcx)
    uint64_t rsi_1 = 0
    uint64_t var_50 = 0
    int32_t i_2 = rax_1[1].d
    int64_t rbx_1 = *rax_1
    int32_t i_3 = i_2
    int32_t i_4 = i_2
    
    if (i_2 != 0)
        sub_14061cb30(&var_50, i_2, 0)
        rsi_1 = var_50
        uint64_t rcx_6 = rsi_1
        int64_t rbx_2 = rbx_1 - rsi_1
        int32_t i
        
        do
            *rcx_6 = *(rbx_2 + rcx_6)
            void* rax_3 = *(rbx_2 + rcx_6 + 8)
            *(rcx_6 + 8) = rax_3
            
            if (rax_3 != 0)
                *(rax_3 + 8) += 1
            
            rcx_6 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_4
        i_3 = i_2
    
    uint64_t r15_1 = rsi_1
    int64_t rax_6 = (sx.q(i_2) << 4) + rsi_1
    
    if (rsi_1 != rax_6)
        uint64_t r14_1 = var_88
        int64_t var_70_1 = 0
        
        do
            int64_t* rsi_2 = *(r15_1 + 8)
            int64_t r13_1 = *r15_1
            
            if (rsi_2 != 0)
                rsi_2[1].d += 1
            
            void* rax_7 = sub_140cde0b0()
            sub_140d19010(rax_7, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            void* rax_9 = sub_140d2dfc0(sub_140681360(), rax_7, 0, 0, 0, 0, 0, 0, 0)
            int64_t* rdi_1 = rsi_2
            int64_t var_60 = r13_1
            
            if (rsi_2 != 0)
                rsi_2[1].d += 1
            
            if (&var_60 != rax_9 + 0x28)
                var_60.o = *(rax_9 + 0x28)
                rdi_1 = rsi_2
                *(rax_9 + 0x28) = var_60.o
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t rdi_2 = sx.q(r12)
            r12 = (rdi_2 + 1).d
            
            if (r12 s> var_7c)
                sub_140638870(&var_88)
                r14_1 = var_88
            
            *(r14_1 + (rdi_2 << 3)) = rax_9
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp7_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            r15_1 += 0x10
        while (r15_1 != rax_6)
        
        i_2 = i_3
        result = arg2
        rsi_1 = var_50
    
    *result = var_88
    *(result + 0xc) = var_7c
    result[1].d = r12
    
    if (i_2 != 0)
        int64_t* rdi_3 = rsi_1 + 8
        int32_t i_1
        
        do
            int64_t* rbx_3 = *rdi_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_3 = &rdi_3[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        result = arg2
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
else
    var_88 = 0
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, (rcx + 6).d)
    int32_t rax = var_80_1 + 6
    var_80_1 = rax
    
    if (rax s> var_7c)
        sub_140594770(&var_88)
    
    uint64_t rbx = var_88
    UnDecorator::getReferenceType(rbx, u"Array", 0xc)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
    
    *result = 0
    result[1] = 0

return result
