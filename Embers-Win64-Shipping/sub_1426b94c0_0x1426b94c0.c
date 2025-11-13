// 函数: sub_1426b94c0
// 地址: 0x1426b94c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ab190(arg1)
sub_1426ab080(arg1)
void* rbx = arg1[7]

if (rbx != 0)
    void* rbx_1 = *(rbx + 0xb0)
    
    if (rbx_1 != 0)
        void* rbx_2 = *(rbx_1 + 0x258)
        
        if (rbx_2 != 0)
            void* rax_1 = sub_1427249f0()
            void* rdx_1 = *(rbx_2 + 0x10)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                int64_t* rcx_2 = *(rbx_2 + 0x2d8)
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0x418))(rcx_2, arg1, 0x10, zx.q(arg1[0xf].d), 0)

return 4
