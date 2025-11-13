// 函数: sub_14289faf0
// 地址: 0x14289faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = *(arg1 + 0xac)
int32_t rax = sub_142898c70(arg1[0x13])
void* rdi = arg1[0x18]

if (rdi != 0)
label_14289fb88:
    
    if (*(arg2 + 0xa0) != 0)
    label_14289fc3e:
        
        if ((arg1[0x1a].b & 0x40) != 0)
            goto label_14289fd2c
        
        void* rax_11 = arg1[4]
        arg1[0x19] = arg2
        int32_t rcx_4 = *(rax_11 + 0x14)
        void* rbp_1
        
        if ((rcx_4.b & 2) == 0)
            if (test_bit(rcx_4, 0x15))
                goto label_14289fd2c
            
            rbp_1 = nullptr
        else
            rbp_1 = rax_11 + 8
        
        int32_t rax_13 = sub_14289e600(sub_1427ec4a0(arg2), rbp_1)
        int32_t result
        
        if (rax_13 == 0)
            arg1[0x16].d = 0xf
            result = arg1[7](0, arg1)
            
            if (result != 0)
                goto label_14289fcc1
            
            return result
        
        if (rax_13 s<= 0)
        label_14289fcc1:
            
            if (sub_142896660(arg2) == 0)
            label_14289fd1e:
                arg1[0x19] = 0
            label_14289fd2c:
                char* rax_19 = sub_1428a38c0(rdi)
                
                if (rax_19 != 0)
                    int32_t rax_21 = sub_1428a3200(arg2, rax_19, *(arg1[4] + 0x14))
                    int32_t rax_22
                    
                    if (rax_21 != 0)
                        arg1[0x16].d = rax_21
                        rax_22 = arg1[7](0, arg1)
                    
                    if (rax_21 == 0 || rax_22 != 0)
                        if (sub_1428e44e0(arg2, rax_19) s> 0)
                            return 1
                        
                        arg1[0x16].d = 8
                        goto label_14289fd8c
                else
                    arg1[0x16].d = 6
                label_14289fd8c:
                    
                    if (arg1[7](0, arg1) != 0)
                        return 1
            else
                int32_t rax_17 = sub_14289e600(sub_142896660(arg2), rbp_1)
                
                if (rax_17 == 0)
                    arg1[0x16].d = 0x10
                    result = arg1[7](0, arg1)
                    
                    if (result != 0)
                        goto label_14289fd1e
                    
                    return result
                
                if (rax_17 s>= 0 || (arg1[0x1a].b & 2) != 0)
                    goto label_14289fd1e
                
                arg1[0x16].d = 0xc
                
                if (arg1[7](0, arg1) != 0)
                    goto label_14289fd1e
        else
            arg1[0x16].d = 0xb
            
            if (arg1[7](0, arg1) != 0)
                goto label_14289fcc1
    else
        int32_t rax_6
        
        if ((*(rdi + 0xd0) & 2) != 0 && (*(rdi + 0xd4) & 2) == 0)
            arg1[0x16].d = 0x23
            rax_6 = arg1[7](0, arg1)
        
        if ((*(rdi + 0xd0) & 2) == 0 || (*(rdi + 0xd4) & 2) != 0 || rax_6 != 0)
            int32_t rax_7
            
            if ((arg1[0x1a].b & 0x80) == 0)
                arg1[0x16].d = 0x2c
                rax_7 = arg1[7](0, arg1)
            
            if ((arg1[0x1a].b & 0x80) != 0 || rax_7 != 0)
                if ((arg1[0x1a].b & 8) != 0)
                label_14289fc1b:
                    
                    if ((*(arg2 + 0x90) & 2) == 0)
                        goto label_14289fc3e
                    
                    arg1[0x16].d = 0x29
                    
                    if (arg1[7](0, arg1) != 0)
                        goto label_14289fc3e
                else
                    if (sub_14289fdc0(arg1, arg1[0x18]) s> 0)
                        goto label_14289fc1b
                    
                    arg1[0x16].d = 0x36
                    
                    if (arg1[7](0, arg1) != 0)
                        goto label_14289fc1b
else
    int32_t* rcx_1 = arg1[0x13]
    
    if (rbp s< rax - 1)
        rdi = sub_142898ea0(rcx_1, rbp + 1)
    label_14289fb7f:
        
        if (rdi == 0)
            return 1
        
        goto label_14289fb88
    
    void* rax_3 = sub_142898ea0(rcx_1, rax - 1)
    rdi = rax_3
    
    if (arg1[9](arg1, rax_3, rax_3) != 0)
        goto label_14289fb7f
    
    arg1[0x16].d = 0x21
    
    if (arg1[7](0, arg1) != 0)
        goto label_14289fb7f

return 0
