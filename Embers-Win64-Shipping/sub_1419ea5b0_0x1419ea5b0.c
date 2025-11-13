// 函数: sub_1419ea5b0
// 地址: 0x1419ea5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rbp = &i[sx.q(arg1[1].d)]; i != rbp; i = &i[1])
    void* rbx_1 = *i
    
    if (rbx_1 != 0 && sub_140d3c6e0(rbx_1 + 0x4dc) == 0)
        if ((*(rbx_1 + 0x4f4) | *(rbx_1 + 0x4f0) | *(rbx_1 + 0x4ec) | *(rbx_1 + 0x4e8)) == 0)
            return i
        
        int32_t rax_6 = 0
        
        if (0 == data_1439a9d84)
            data_1439a9d84 = 0
        else
            rax_6 = data_1439a9d84
        
        if (rax_6 == *(rbx_1 + 0x4e4) && *(rbx_1 + 0x4dc) == 0xffffffff)
            return i
        
        void* rax_7 = sub_140ccdeb0(rbx_1 + 0x4e8)
        sub_140d3a3a0(rbx_1 + 0x4dc, rax_7)
        
        if (rax_7 != 0 || data_143e1d7b4 == 0)
            int32_t rax_8 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_8 = data_1439a9d84
            
            *(rbx_1 + 0x4e4) = rax_8
        
        if (sub_140d3c6e0(rbx_1 + 0x4dc) == 0)
            return i

return nullptr
