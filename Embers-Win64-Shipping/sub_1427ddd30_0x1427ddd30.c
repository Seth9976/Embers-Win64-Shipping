// 函数: sub_1427ddd30
// 地址: 0x1427ddd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int64_t* r12 = arg1[5]
int64_t* r15 = arg1[8]
int32_t r9 = *(*arg1 + 0x10)
uint64_t rcx = zx.q(r8[2].d)
int32_t rax_2 = *(r8 + 0x14) & 0x7fffffff
int32_t arg_8 = r9

if (rax_2 u> rcx.d)
    int32_t* rdx_1 = r8[1] + (rcx << 2)
    
    if (rdx_1 != 0)
        *rdx_1 = r9
    
    r8[2].d += 1
else
    sub_1427e4fb0(r8, &arg_8)

if (sub_1427e4f10(arg1) != 0 && sub_1427e4e50(arg1) != 0)
    char i
    
    do
        char* rax_7
        
        if (arg1[9].b == 0)
            rax_7 = &data_1434cce10
        else
            int64_t* rcx_4 = arg1[5]
            rax_7 = (*(*rcx_4 + 0x38))(rcx_4)
        
        int32_t rax_8 = physx::shdfnd::stricmp(rax_7, "PxShapeRef")
        arg_8.q = 0
        
        if (rax_8 != 0)
            int64_t var_38 = 0
            int64_t var_30_1 = 0
            sub_1427db150(arg1, &arg_8, &var_38)
            int64_t rdi_1 = var_38
            int64_t rbp_1 = arg_8.q
            
            if (var_30_1.d != 0)
                int64_t* rcx_9 = arg1[2]
                arg_8.b = 0xb
                int64_t rax_13 =
                    (*(*rcx_9 + 0xd8))(rcx_9, rbp_1, rdi_1, zx.q(var_30_1.w), 1, &arg_8)
                
                if (rax_13 != 0)
                    sub_1427dd940(arg1)
                    int64_t r8_4 = *arg2
                    (*(r8_4 + 0xb8))(arg2, rax_13, r8_4)
                    int64_t r9_2 = *r15
                    (*(r9_2 + 8))(r15, rax_13, 0, r9_2)
            
            int64_t* rcx_13 = arg1[7]
            int64_t* rax_15 = (*(*rcx_13 + 0x18))(rcx_13)
            int64_t r8_5 = *rax_15
            (*(r8_5 + 0x10))(rax_15, rbp_1, r8_5)
            int32_t rax_16 = var_30_1:4.d
            
            if ((rax_16 & 0x7fffffff) != 0 && rax_16 s>= 0 && rdi_1 != 0)
                class physx::PxAllocatorCallback* rax_17 = physx::shdfnd::getAllocator()
                int64_t r8_6 = *rax_17
                (*(r8_6 + 0x10))(rax_17, rdi_1, r8_6)
        else
            if (sub_1427ddc70(r12, r15, &arg_8) == 0)
                *arg1[0xa] = 1
            
            int64_t rdx_3 = arg_8.q
            
            if (rdx_3 != 0)
                (*(*arg2 + 0xb8))(arg2, rdx_3)
        
        if (arg1[9].b == 0)
            break
        
        int64_t* rcx_16 = arg1[5]
        i = (*(*rcx_16 + 0x28))(rcx_16)
    while (i != 0)

return sub_1427e5ba0(arg1) __tailcall
