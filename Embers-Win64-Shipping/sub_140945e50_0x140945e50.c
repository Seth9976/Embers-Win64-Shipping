// 函数: sub_140945e50
// 地址: 0x140945e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_140976a00(arg1, arg3 + result, arg4)
    void* rbp_1 = *arg1
    
    if (i_1 != 0)
        void* rdi_1 = arg2 + 0x20
        void* rbx_1 = rbp_1 + 0xe0
        int32_t i
        
        do
            sub_140596d10(rbp_1, rdi_1 - 0x20)
            *(rbx_1 - 0xd0) = *(rdi_1 - 0x10)
            void* rax_1 = *(rdi_1 - 8)
            *(rbx_1 - 0xc8) = rax_1
            
            if (rax_1 != 0)
                *(rax_1 + 8) += 1
            
            *(rbx_1 - 0xc0) = *rdi_1
            *(rbx_1 - 0xb8) = *(rdi_1 + 8)
            void* rax_4 = *(rdi_1 + 0x10)
            *(rbx_1 - 0xb0) = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            *(rbx_1 - 0xa8) = *(rdi_1 + 0x18)
            *(rbx_1 - 0xa0) = *(rdi_1 + 0x20)
            void* rax_7 = *(rdi_1 + 0x28)
            *(rbx_1 - 0x98) = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 8) += 1
            
            *(rbx_1 - 0x90) = *(rdi_1 + 0x30)
            *(rbx_1 - 0x88) = *(rdi_1 + 0x38)
            void* rax_10 = *(rdi_1 + 0x40)
            *(rbx_1 - 0x80) = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
            
            *(rbx_1 - 0x78) = *(rdi_1 + 0x48)
            *(rbx_1 - 0x70) = *(rdi_1 + 0x50)
            *(rbx_1 - 0x68) = *(rdi_1 + 0x58)
            void* rax_14 = *(rdi_1 + 0x60)
            *(rbx_1 - 0x60) = rax_14
            
            if (rax_14 != 0)
                *(rax_14 + 8) += 1
            
            *(rbx_1 - 0x58) = *(rdi_1 + 0x68)
            *(rbx_1 - 0x50) = *(rdi_1 + 0x70)
            sub_140596d10(rbx_1 - 0x48, rdi_1 + 0x78)
            *(rbx_1 - 0x38) = *(rdi_1 + 0x88)
            void* rdx_3 = rbx_1 - 0x10
            *(rbx_1 - 0x30) = *(rdi_1 + 0x90)
            *(rbx_1 - 0x28) = *(rdi_1 + 0x98)
            *(rbx_1 - 0x20) = 0
            *(rbx_1 - 0x18) = 0
            *rbx_1 = 0
            *(rbx_1 + 8) = 0
            *(rbx_1 + 0xc) = 0x80
            void* rax_20 = *rbx_1
            
            if (rax_20 != 0)
                rdx_3 = rax_20
            
            *rdx_3 = 0
            *(rdx_3 + 8) = 0
            *(rbx_1 + 0x10) = 0xffffffff
            *(rbx_1 + 0x14) = 0
            *(rbx_1 + 0x20) = 0
            *(rbx_1 + 0x28) = 0
            result = sub_14094d9d0(rbx_1 - 0x20, rdi_1 + 0xa0)
            rbp_1 += 0x110
            rbx_1 += 0x110
            rdi_1 += 0x110
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
