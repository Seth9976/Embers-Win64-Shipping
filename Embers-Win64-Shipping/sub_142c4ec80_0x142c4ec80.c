// 函数: sub_142c4ec80
// 地址: 0x142c4ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1e8) != 0)
    int64_t* rax_1 = *(arg1 + 0x1e0)
    int64_t* i = *rax_1
    
    if (i != rax_1)
        do
            int64_t* rcx = i[5]
            
            if (rcx != 0)
                (*(*rcx + 0x10))(rcx)
            
            int64_t* i_1 = i[2]
            
            if (*(i_1 + 0x19) == 0)
                int64_t* i_3 = *i_1
                i = i_1
                
                if (*(i_3 + 0x19) == 0)
                    int64_t* i_4
                    
                    do
                        i_4 = *i_3
                        i = i_3
                        i_3 = i_4
                    while (*(i_4 + 0x19) == 0)
            else
                int64_t* i_2 = i[1]
                
                if (*(i_2 + 0x19) == 0)
                    while (i == i_2[2])
                        i = i_2
                        i_2 = i_2[1]
                        
                        if (*(i_2 + 0x19) != 0)
                            break
                
                i = i_2
        while (i != *(arg1 + 0x1e0))
    
    sub_142c4f230(arg1 + 0x1e0)

int64_t* rcx_2 = *(arg1 + 0x1d0)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x1d0) = 0

int64_t* rcx_3 = *(arg1 + 0x1c8)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)
    *(arg1 + 0x1c8) = 0

int64_t* rcx_4 = *(arg1 + 0x1d8)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)
    *(arg1 + 0x1d8) = 0

int64_t* rcx_5 = *(arg1 + 0x1c0)

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)
    *(arg1 + 0x1c0) = 0
