// 函数: sub_141914cd0
// 地址: 0x141914cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143eff5d8 != 0)
    return 

if (data_1439c74e8 == 0)
    int64_t entry_r9
    sub_140af98a0("Unknown", 0xc3b, 
        Platform doesn't support SM5 for OpenGL but set feature level to SM5", entry_r9)
    sub_140afbb40()
else
    int64_t* rbx_1 = *(arg1 + 0x560)
    *(arg1 + 0x560) = arg2
    
    if (arg2 != 0)
        *(arg2 + 8) += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_1
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_1 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)

if (arg2 == 0)
    return 

if (data_143f01c92 != 0)
    sub_140a80f40()

void* rsi_1 = *(arg2 + 0x40)

if (rsi_1 == 0)
    return 

int32_t i = 0

if (*(rsi_1 + 0xd0) s<= 0)
    return 

int64_t rdi_1 = 0

do
    char rdx_1 = *(rdi_1 + *(rsi_1 + 0xc8))
    
    if (rdx_1 u< 0xff)
        void* r14_1 = *(*(arg1 + 0x15b40) + (zx.q(rdx_1) << 3))
        *(*(rsi_1 + 0x90) + (rdi_1 << 2))
        
        if (r14_1 != 0)
            sub_1405d16e0(arg1 + 0x798 + (zx.q(i) << 3), r14_1)
            *(arg1 + 0x814) = (zx.d(*(arg1 + 0x814)) | 1 << (i u% 0x20)).w
    
    i += 1
    rdi_1 += 1
while (i s< *(rsi_1 + 0xd0))
