// 函数: sub_142cfd900
// 地址: 0x142cfd900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0xa
int64_t* rbx = &data_143a2db70

do
    i -= 1
    rbx = &rbx[-8]
    
    if (*rbx != 0)
        void* rax_1 = rbx[2]
        void* rcx_1 = &rbx[4]
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        (*(*rcx_1 + 0x10))(rcx_1)
while (i != 0)
