// 函数: sub_1408482b0
// 地址: 0x1408482b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg2)
uint64_t r13 = zx.q(arg2)
void* rbx = *(**(*arg1 + 0x10) + (r12 << 3))

if ((*(rbx + 0x200) & 1) != 0)
    void* r11_1 = arg1[1]
    
    if ((*(r11_1 + 0xd68) & 1) != 0)
        int32_t* r9_1 = *(r11_1 + 0xb20)
        void* r10_1 = *(r11_1 + 0x350)
        int64_t rdi_1 = *(rbx + 0x170)
        void* rbp_1 = &r9_1[sx.q(*(r11_1 + 0xb28)) * 2]
        
        while (r9_1 != rbp_1)
            uint64_t rdx_1 = zx.q(r9_1[1] * *(r10_1 + 0xb8))
            int64_t r8_1 = sx.q(*r9_1)
            r9_1 = &r9_1[2]
            *(rdx_1 + (r13 << 2) + *(r10_1 + 0x18)) = *(r8_1 + rdi_1)
        
        int32_t* r8_2 = *(r11_1 + 0xb30)
        void* r9_2 = &r8_2[sx.q(*(r11_1 + 0xb38)) * 2]
        
        while (r8_2 != r9_2)
            uint64_t rcx_2 = zx.q(r8_2[1] * *(r10_1 + 0xbc))
            int64_t rdx_3 = sx.q(*r8_2)
            r8_2 = &r8_2[2]
            *(rcx_2 + *(r10_1 + 0x28) + (r13 << 2)) = *(rdx_3 + rdi_1)
        
        void* rdi_2 = arg1[1]
        int64_t r11_2 = *(rbx + 0x170)
        int32_t* r9_3 = *(rdi_2 + 0xb40)
        void* r10_2 = *(rdi_2 + 0x420)
        void* rbp_2 = &r9_3[sx.q(*(rdi_2 + 0xb48)) * 2]
        
        while (r9_3 != rbp_2)
            uint64_t rdx_5 = zx.q(r9_3[1] * *(r10_2 + 0xb8))
            int64_t r8_3 = sx.q(*r9_3)
            r9_3 = &r9_3[2]
            *(rdx_5 + (r13 << 2) + *(r10_2 + 0x18)) = *(r8_3 + r11_2)
        
        int32_t* r9_4 = *(rdi_2 + 0xb50)
        void* rdi_3 = &r9_4[sx.q(*(rdi_2 + 0xb58)) * 2]
        
        while (r9_4 != rdi_3)
            uint64_t rdx_8 = zx.q(r9_4[1] * *(r10_2 + 0xbc))
            int64_t r8_4 = sx.q(*r9_4)
            r9_4 = &r9_4[2]
            *(rdx_8 + (r13 << 2) + *(r10_2 + 0x28)) = *(r8_4 + r11_2)

void* rcx_6 = arg1[1]
uint64_t result = sub_14084be60(rcx_6 + 0xb60, rbx, rcx_6 + 0x2b0, rcx_6 + 0x380, r13.d)
int32_t i = 0

if (*(rbx + 0xa8) s> 0)
    int64_t r9_6 = 0
    int64_t r8_6 = 0
    
    do
        result = arg1[1]
        
        if (*(result + 0xd60) s> i)
            result = *(result + 0xd58)
            int64_t r10_3 = *(result + r8_6 + 0x40)
            
            if (r10_3 != 0)
                result = zx.q(*(*(*(rbx + 0xa0) + r9_6) + 0x24))
                *(r10_3 + (r12 << 2)) = result.d
        
        i += 1
        r8_6 += 0x48
        r9_6 += 0x10
    while (i s< *(rbx + 0xa8))

return result
