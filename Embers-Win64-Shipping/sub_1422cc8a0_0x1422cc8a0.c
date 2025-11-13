// 函数: sub_1422cc8a0
// 地址: 0x1422cc8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
void* const rbp = arg4
int64_t rbx = arg3

if (*(*(arg3 + 0x28) + 0x1358) u>= 0xb)
    void* r10_1 = *(arg3 + 8)
    
    if ((*(r10_1 + 0x29) & 1) == 0)
        int64_t r11_1 = *(r10_1 + 0xa8)
        
        if (r11_1 s< *(r10_1 + 0xa0))
            arg3 = sx.q((r11_1 s>> 3).d)
            arg4.b = 1 << (r11_1.b & 7)
            bool cond:1_1 = (*(arg3 + *(r10_1 + 0x90)) & arg4.b) != 0
            *(r10_1 + 0xa8) = r11_1 + 1
            rdi.b = cond:1_1
        else
            sub_140b55370(r10_1)

int32_t rcx_4 = 0
*(rbx + 0x4e) = rdi.b
bool cond:0 = *(rbp + 0x38) == 1
int32_t arg_18 = 0

if (not(cond:0))
    int64_t* rcx_3 = *(rbx + 8)
    (*(*rcx_3 + 0x168))(rcx_3, &arg_18, arg3, arg4)
    rcx_4 = arg_18

if (cond:0 || rcx_4 u< *(rbp + 0x38))
    void* rdi_3 = sx.q(zx.d(*(rbp + 0x48)) + rcx_4) * 0x30 + *(arg1 + 0x28)
    
    if (((*(rdi_3 + 0x2c) u>> 3).b & 1) != 0)
        void* r15_1 = *(rbp + 0x78)
        int64_t* r12_1 = *(r15_1 + 0xb8)
        int64_t var_48
        int64_t* rax_10 = sub_140b63b70(rdi_3 + 8, &var_48)
        
        if (rbx + 0x78 != rax_10)
            int64_t rcx_6 = *(rbx + 0x78)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *(rbx + 0x78) = *rax_10
            *rax_10 = 0
            *(rbx + 0x80) = rax_10[1].d
            *(rbx + 0x84) = *(rax_10 + 0xc)
            rax_10[1] = 0
        
        int64_t rcx_8 = var_48
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t rax_13 = arg_18.w
        *(rbx + 0x38) = r15_1
        *(rbx + 0x70) = *(*(*(arg1 + 0x58) + 0x10) + (zx.q(rax_13 + *(rbp + 0x48)) << 1))
        *(rbx + 0x30) = sx.q(*(rdi_3 + 0x14)) + *(rbx + 0x50)
        
        if ((*(*r12_1 + 0x80))(r12_1, rbx) != 0)
            void* rcx_10 = *(rbx + 8)
            
            if ((*(rcx_10 + 0x29) & 1) == 0)
                *(rcx_10 + 0xa8)
                
                if (*(rcx_10 + 0xa0) == *(rcx_10 + 0xa8))
                    if (*(rdi_3 + 0x28) != 0xffffffff)
                        sub_1422cc6a0(arg2, rbx, rbp, arg_18.b)
                    
                    return 1

return 0
