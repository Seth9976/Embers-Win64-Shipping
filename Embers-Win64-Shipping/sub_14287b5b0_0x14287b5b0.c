// 函数: sub_14287b5b0
// 地址: 0x14287b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* arg_20 = nullptr
char* arg_18 = nullptr

if (arg2 == 3)
    void* rdx = *(arg1 + 0x488)
    int64_t rax_1 = *(rdx + 0x1c8)
    
    if (rax_1 == 0)
        goto label_14287b638
    
    int32_t rax_2 = rax_1(arg1, *(rdx + 0x1d0))
    
    if (rax_2 s< 0)
        *(arg1 + 0x28) = 4
        return 3
    
    if (rax_2 != 0)
        *(arg1 + 0x28) = 1
    label_14287b638:
        
        if (sub_142879e30(arg1) == 0)
            goto label_14287b656
        
    label_14287b7c3:
        
        if (*(arg1 + 0x758) != 4)
            return 2
        
        return 1
    
    sub_142856580(arg1, 0x50, 0x168, 0xea, "ssl\statem\statem_clnt.c", 0xd84)
else if (arg2 != 4)
    sub_142856580(arg1, 0x50, 0x168, 0x44, "ssl\statem\statem_clnt.c", 0xdc2)
else
label_14287b656:
    int32_t rcx_1 = 0
    int32_t rax_7
    
    if (*(*(arg1 + 0x598) + 0x1d8) != 0)
        void* rax_6 = sub_142853580(arg1)
        rax_7 = sub_1428bb500(*(*(arg1 + 0x598) + 0x1d8), arg1, rax_6, &arg_20, &arg_18, 0, 0, 0)
        rcx_1 = rax_7
    
    if (*(*(arg1 + 0x598) + 0x1d8) == 0 || rax_7 == 0)
        int64_t r9_3 = *(*(arg1 + 0x598) + 0xb8)
        
        if (r9_3 != 0)
            rcx_1 = r9_3(arg1, &arg_20, &arg_18)
    
    int32_t rdi_1 = rcx_1
    
    if (rcx_1 s< 0)
        *(arg1 + 0x28) = 4
        return 4
    
    *(arg1 + 0x28) = 1
    
    if (rcx_1 == 1)
        int64_t* rdx_4
        
        if (arg_18 != 0)
            rdx_4 = arg_20
        
        if (arg_18 == 0 || rdx_4 == 0)
            rdi_1 = 0
            sub_1428a5670(0x14, 0x168, 0x6a, "ssl\statem\statem_clnt.c", 0xda6)
        else
            int32_t rax_11 = sub_14288e0c0(arg1, rdx_4)
            int32_t rax_12
            
            if (rax_11 != 0)
                rax_12 = sub_14288df40(arg1, arg_18)
            
            if (rax_11 == 0 || rax_12 == 0)
                rdi_1 = 0
    
    sub_1428a2c50(arg_20)
    sub_1428965a0(arg_18)
    int32_t rax_13
    
    if (rdi_1 != 0)
        rax_13 = sub_142879e30(arg1)
    
    if (rdi_1 != 0 && rax_13 != 0)
        goto label_14287b7c3
    
    void* rax_14 = *(arg1 + 0xa8)
    
    if (*arg1 == 0x300)
        *(rax_14 + 0x248) = 0
        sub_1428732d0(arg1, 1, 0x29)
        return 2
    
    *(rax_14 + 0x248) = 2
    
    if (sub_1428821e0(arg1, 0) != 0)
        goto label_14287b7c3

return 0
