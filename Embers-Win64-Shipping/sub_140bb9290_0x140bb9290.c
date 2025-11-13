// 函数: sub_140bb9290
// 地址: 0x140bb9290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = GetCurrentThreadId()
bool cond:0 = data_143de5480 == 0
data_143e1a344 = rax

if (not(cond:0))
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        sub_140b72cd0(-1)
        sub_140a8d380()

int64_t rdi
rdi.b = 0
bool z

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
    z = true
else
    *(arg1 + 0x20)
    z = false

if (z)
    int128_t zmm6 = 0x3a83126f
    int128_t zmm7 = 0x3d072b02
    bool z_3
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x84))
            *(arg1 + 0x84) = 0
            z_1 = true
        else
            *(arg1 + 0x84)
            z_1 = false
        
        if (z_1)
            if (rdi.b != 0)
                int64_t* rcx = *(arg1 + 0x40)
                rdi.b = 0
                (*(*rcx + 0x10))(rcx)
            
            void* rcx_1 = data_143e1adf0
            bool z_2
            
            if (0 == *(rcx_1 + 8))
                *(rcx_1 + 8) = 0
                z_2 = true
            else
                *(rcx_1 + 8)
                z_2 = false
            
            if (z_2)
                char arg_8 = 0
                zmm6, zmm7 = sub_140bbca90(arg1, 1, 0, zmm7, &arg_8, nullptr)
        else if (rdi.b != 0)
            sub_140b732d0(zmm6.d)
        else
            int64_t* rcx_3 = *(arg1 + 0x38)
            rdi.b = 1
            (*(*rcx_3 + 0x10))(rcx_3)
        
        if (0 == *(arg1 + 0x20))
            *(arg1 + 0x20) = 0
            z_3 = true
        else
            *(arg1 + 0x20)
            z_3 = false
    while (z_3)

return 0
