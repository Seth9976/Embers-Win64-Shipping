// 函数: sub_140972140
// 地址: 0x140972140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
uint64_t var_20 = r14
*(arg1 + 0x30) = 0
int32_t rax = *(arg1 + 0x434)

if (rax s< 0)
    *(arg1 + 0x434) = 0
    
    if (*(arg1 + 0x438) s< 0)
        arg2 = zx.q(rax)
        sub_140976aa0(arg1 + 0x34)
else if (rax s> 0 && rax != 0)
    *(arg1 + 0x434) = 0

int64_t* rcx_1 = *(arg1 + 0x440)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x60))(rcx_1, arg2)

*(arg1 + 0x450) = 0
*(arg1 + 0x458) = 0

while (true)
    void* rbx_1 = *(arg1 + 0x28)
    r14.b = 0
    
    if (rbx_1 != 0)
        if (*(*(arg1 + 0x18) + 0x3f) != 0)
            int32_t rax_32 = 0
            
            if (0 == *(rbx_1 + 0x24))
                *(rbx_1 + 0x24) = 0
            else
                rax_32 = *(rbx_1 + 0x24)
            
            int32_t rax_33 = 0
            
            if (0 == *(rbx_1 + 0x20))
                *(rbx_1 + 0x20) = 0
            else
                rax_33 = *(rbx_1 + 0x20)
            
            int32_t rdx_9 = rax_32 - rax_33
            
            if (rax_32 - rax_33 s< 0)
                rdx_9 += *(rbx_1 + 0x18)
            
            void* rcx_27 = *(arg1 + 0x28)
            int32_t rax_34 = 0
            
            if (0 == *(rcx_27 + 0x24))
                *(rcx_27 + 0x24) = 0
            else
                rax_34 = *(rcx_27 + 0x24)
            
            *(rcx_27 + 0x20)
            *(rcx_27 + 0x20) = rax_34
            
            if (rdx_9 != 0)
                void* rcx_28 = *(arg1 + 0x18)
                *(rcx_28 + 0x14) += rdx_9
            
            break
        
        int64_t var_40_1 = (zx.o(0)).q
        int128_t var_58
        __builtin_memset(&var_58, 0, 0x14)
        int64_t var_68 = 0
        int32_t rax_3 = 0
        uint32_t count = 0
        
        if (0 == *(rbx_1 + 0x20))
            *(rbx_1 + 0x20) = 0
        else
            rax_3 = *(rbx_1 + 0x20)
        
        int64_t rdi_1 = sx.q(rax_3)
        int32_t rax_4 = 0
        
        if (0 == *(rbx_1 + 0x24))
            *(rbx_1 + 0x24) = 0
        else
            rax_4 = *(rbx_1 + 0x24)
        
        if (rdi_1.d == rax_4)
            break
        
        sub_14094de10(&var_68, (sx.q(*(rbx_1 + 8)) & rdi_1) * 0x30 + *(rbx_1 + 0x10))
        *(rbx_1 + 0x20) = (rdi_1 + 1).d & *(rbx_1 + 8)
        int64_t rax_7 = var_58.q
        int64_t* rbx_2 = var_58:8.q
        
        if (rax_7 != 0)
            if (rbx_2 != 0)
                rbx_2[1].d += 2
            
            void var_78
            int64_t rax_9
            int64_t* rcx_6
            
            if (arg1 + 0x440 != &var_78)
                *(arg1 + 0x440) = rax_7
                int64_t* rdi_2 = *(arg1 + 0x448)
                
                if (rbx_2 == rdi_2)
                    goto label_1409722b4
                
                *(arg1 + 0x448) = rbx_2
                
                if (rdi_2 == 0)
                    goto label_1409722db
                
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d != 1)
                    goto label_1409722db
                
                (**rdi_2)(rdi_2)
                int32_t temp14_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp14_1 != 1)
                    goto label_1409722db
                
                rax_9 = *rdi_2
                rcx_6 = rdi_2
                goto label_1409722d8
            
        label_1409722b4:
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d != 1)
                    goto label_1409722db
                
                (**rbx_2)(rbx_2)
                int32_t temp10_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp10_1 != 1)
                    goto label_1409722db
                
                rax_9 = *rbx_2
                rcx_6 = rbx_2
            label_1409722d8:
                (*(rax_9 + 8))(rcx_6, 1)
            label_1409722db:
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp15_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
        
        int32_t var_48
        r14.b = var_48 == 0
        *(arg1 + 0x450) = var_40_1
        *(arg1 + 0x30) = r14.b
        *(arg1 + 0x458) = var_48
        
        if (var_48 != 0)
            if (var_48 u> 0x19 || not(test_bit(0x2400080, var_48)))
                r14.b = 1
        else if (count s<= 0x400)
            int32_t rax_28 = *(arg1 + 0x434)
            
            if (count s> rax_28)
                *(arg1 + 0x434) = count
                
                if (count s> *(arg1 + 0x438))
                    sub_140976aa0(arg1 + 0x34)
            else if (count s< rax_28 && rax_28 != count)
                *(arg1 + 0x434) = count
            
            memcpy(arg1 + 0x34, var_68, count)
        else
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp9_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t rcx_12 = var_68
            
            if (rcx_12 == 0)
                continue
            else
                sub_140a74f90(rcx_12)
                continue
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp12_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (var_68 == 0)
            break
        
        sub_140a74f90(var_68)
        break
    
    int64_t* rcx_13 = *(arg1 + 0x10)
    
    if ((*(*rcx_13 + 0x438))(rcx_13) == 0)
        break
    
    if (*(arg1 + 0x20) == 0)
        break
    
    int64_t* rcx_14 = *(arg1 + 0x10)
    int32_t arg_8 = 0
    int64_t* rax_19 = (*(*rcx_14 + 0x438))(rcx_14)
    char rax_21 = (*(*rax_19 + 0x60))(rax_19, arg1 + 0x34, 0x400, &arg_8, *(arg1 + 0x440), 0)
    *(arg1 + 0x30) = rax_21
    r14 = zx.q(rax_21)
    
    if (rax_21 == 0)
        int64_t* rcx_18 = *(arg1 + 0x20)
        int32_t rax_25 = (*(*rcx_18 + 0xb8))(rcx_18)
        *(arg1 + 0x458) = rax_25
        int32_t rax_26 = *(arg1 + 0x434)
        
        if (rax_26 s< 0)
            *(arg1 + 0x434) = 0
            
            if (*(arg1 + 0x438) s< 0)
                sub_140976aa0(arg1 + 0x34)
        else if (rax_26 s> 0 && rax_26 != 0)
            *(arg1 + 0x434) = 0
        
        if (rax_25 u<= 0x19 && test_bit(0x2400081, rax_25))
            break
        
        r14.b = 1
    else
        int32_t rax_22 = *(arg1 + 0x434)
        int32_t rcx_16 = arg_8
        
        if (rcx_16 s> rax_22)
            *(arg1 + 0x434) = rcx_16
            
            if (rcx_16 s> *(arg1 + 0x438))
                sub_140976aa0(arg1 + 0x34)
        else if (rcx_16 s< rax_22 && rax_22 != rcx_16)
            *(arg1 + 0x434) = rcx_16
    
    void* rax_27 = *(arg1 + 0x18)
    
    if (*(rax_27 + 0x3f) == 0)
        break
    
    if (rax_21 != 0)
        *(rax_27 + 0x14) += 1

return zx.q(r14.b)
