// 函数: sub_14125eea0
// 地址: 0x14125eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t* r14 = arg1
uint64_t r15

if (rbx[1].d != 0 || rbx[2].d != 1)
    r15.b = 0
else
    r15.b = 1

char arg_18

if (*(rbx + 0xc) == 0x30)
    arg_18 = 1

if (*(rbx + 0xc) != 0x30 || rbx[2].d != 1)
    arg_18 = 0

int64_t* var_d8
int64_t* result

if (r15.b == 0)
    int64_t* rdx_5 = rbx[6]
    void* r8_4 = *rbx
    int64_t* rbp_1 = rbx[4]
    int64_t** r15_1 = rbx[7]
    char rcx_5 = (rbx[2].d).b
    void** const var_78 = &data_142f11938
    void* var_70_1 = &rbx[0x12]
    void* var_60_1 = &rbx[0x15]
    void* var_58_1 = &rbx[0x1e]
    result = &var_78
    rbp_1[4] = &var_78
    int64_t r13_1 = sx.q(rdx_5[1].d)
    void* var_68_1 = &rbx[0xa]
    int64_t rsi_1 = 0
    void* arg_20 = r8_4
    
    if (r13_1 s> 0)
        int64_t rdi_2 = 0
        int64_t* r14_1 = nullptr
        
        do
            if (r15_1 != 0)
                result = *r15_1
            
            if (r15_1 == 0 || (*(result + (rdi_2 << 2)) & rol.d(1, rcx_5)) != 0)
                int64_t rax_18 = *rdx_5
                var_d8.d = 0xffffffff
                result =
                    (*(*rbp_1 + 8))(rbp_1, *(r14_1 + rax_18), -1, *(r14_1 + rax_18 + 8), 0xffffffff)
            
            rdi_2 += 1
            r14_1 = &r14_1[3]
        while (rdi_2 s< r13_1)
        
        r8_4 = arg_20
        r14 = arg1
    
    int64_t rdi_3 = sx.q(rbx[0xf].d)
    
    if (rdi_3 s> 0)
        do
            void* rdx_7 = *(rbx[0xe] + (rsi_1 << 3))
            int64_t r8_5
            
            if ((*(rdx_7 + 0x9c) & 0x100000) == 0)
                r8_5 = -1
            else
                r8_5 = *(*(r8_4 + 0x16d8) + (sx.q(*(rdx_7 + 0xac)) << 3))
            
            var_d8.d = *(rdx_7 + 0xa8)
            result = (*(*rbp_1 + 8))(rbp_1, rdx_7, r8_5, *(*(rdx_7 + 0xa0) + 8), var_d8)
            r8_4 = arg_20
            rsi_1 += 1
        while (rsi_1 s< rdi_3)
    
    r15 = zx.q(r15.b)
else
    void* rbx_1 = *rbx
    int32_t rbp = *(rbx[0x30] + 8)
    
    if ((*(rbx_1 + 0x4810) & 1) != 0)
        int32_t rax_1 = rbx[0xb].d
        int64_t r8_1 = sx.q(rax_1 - 1)
        
        if (rax_1 - 1 s>= 0)
            int64_t rdx_2 = r8_1 * 0x28
            int64_t temp2_1
            
            do
                uint128_t* r10_1 = rbx[0xc]
                uint128_t* r9_2 = rbx[0xa] + rdx_2
                
                if ((*(rbx_1 + 0x4810) & 2) != 0)
                label_14125ef9b:
                    *r9_2 = *(r10_1 + rdx_2)
                    r9_2[1] = *(r10_1 + rdx_2 + 0x10)
                    r9_2[2].q = *(r10_1 + rdx_2 + 0x20)
                else
                    int32_t rcx = *(r9_2 + 0x14)
                    
                    if (rcx s< rbp)
                        void* r11_1 = rbx_1 + 0x4818
                        void* rax_3 = *(r11_1 + 0x10)
                        
                        if (rax_3 != 0)
                            r11_1 = rax_3
                        
                        int32_t rax_4 = rcx
                        
                        if (rcx s< 0)
                            rax_4 = rcx + 0x1f
                        
                        if (test_bit(*(r11_1 + (sx.q(rax_4 s>> 5) << 2)), rcx & 0x1f))
                            goto label_14125ef9b
                
                rdx_2 -= 0x28
                temp2_1 = r8_1
                r8_1 -= 1
            while (temp2_1 - 1 s>= 0)
        
        int32_t rax_8 = *(rbx + 0x6c)
        rbx[0xd].d = 0
        
        if (rax_8 s< 0 && rax_8 != 0)
            sub_141105150(&rbx[0xc], 0)
    
    int64_t* r10_2 = *r14
    void* var_90_1 = &r10_2[0x1e]
    void* var_98_1 = &r10_2[0x15]
    result = sub_14126bdd0(*r10_2, zx.q(r10_2[1].d), r10_2[2].d, r10_2[4], r10_2[5], r10_2[6], 
        r10_2[7], *(r10_2 + 0x44), &r10_2[0xe], r10_2[9].d, &r10_2[0xa], &r10_2[0x12])

void* r11_2 = *r14

if (*(r11_2 + 0x58) s> 0)
    int32_t rdx_8 = *(r11_2 + 0x10)
    int64_t* var_d0
    int32_t var_c0
    
    if (rdx_8 != 0x12)
        int32_t var_b0
        var_b0.q = r11_2 + 0xf0
        var_c0.q = r11_2 + 0x90
        var_d0.d = *(r11_2 + 0x1c)
        var_d8.d = *(r11_2 + 0x18)
        sub_14125f8e0(*(r11_2 + 8), rdx_8, *(r11_2 + 0x16), *(r11_2 + 0x17), var_d8.d, var_d0.d, 
            r11_2 + 0x50, var_c0, r11_2 + 0xa8, var_b0, r11_2 + 0x108)
        r11_2 = *r14
    
    if (r15.b != 0 || arg_18 != r15.b)
        sub_1412e5570(r11_2 + 0x12c, *(r11_2 + 0x180), r11_2 + 0x50)
    else
        int32_t rcx_11 = *(r11_2 + 0x118)
        
        if (rcx_11 != 4)
            void* var_c8_3 = r11_2 + 0x50
            var_d0.d = rcx_11
            sub_1412e89e0(*(r11_2 + 0x11c), r11_2 + 0x120, r11_2 + 0x12c, r11_2 + 0x140, 
                *(r11_2 + 0x180), var_d0)
    
    void* rax_27 = *r14
    result = sub_1412563a0(*(rax_27 + 0x50), *(rax_27 + 0x58), arg1.b)
    void* rcx_15 = *r14
    
    if (*(rcx_15 + 0x14) != 0)
        void* var_a8
        var_a8.d = *(rcx_15 + 0x40)
        var_c0.q = rcx_15 + 0x188
        var_d8.d = *(rcx_15 + 0x100)
        return sub_1412603c0(*(rcx_15 + 0x15), rcx_15 + 0x50, rcx_15 + 0x90, *(rcx_15 + 0xf8), 
            var_d8, rcx_15 + 0x108, rcx_15 + 0x190, var_c0, rcx_15.d + 0x18c, *(rcx_15 + 0xc))

return result
