// 函数: sub_140a80800
// 地址: 0x140a80800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i

if (data_143de5452 != 0)
    int64_t* i_1 = *arg1
    
    if (i_1 != 0)
        do
            if (sub_140a54510((*(*i_1 + 0x68))(i_1), u"CachedReadFile") == 0)
                int64_t* rcx_3 = *arg1
                int64_t* rsi_1 = nullptr
                
                if (rcx_3 == 0)
                label_140a808a7:
                    int64_t* rax_9 = (*(*i_1 + 0x58))(i_1)
                    *arg1 = rax_9
                    int64_t rdx_2 = *rax_9
                    (*(rdx_2 + 0x28))(rax_9, rdx_2)
                else
                    while (rcx_3 != i_1)
                        rsi_1 = rcx_3
                        int64_t* rax_5 = (*(*rcx_3 + 0x58))()
                        rcx_3 = rax_5
                        
                        if (rax_5 == 0)
                            break
                    
                    if (rsi_1 == 0)
                        goto label_140a808a7
                    
                    (*(*rsi_1 + 0x60))(rsi_1, (*(*i_1 + 0x58))(i_1))
                
                break
            
            i = (*(*i_1 + 0x58))(i_1)
            i_1 = i
        while (i != 0)

int64_t* i_2 = *arg1

if (i_2 == 0)
    return 

do
    (*(*i_2 + 0x38))(i_2)
    i = (*(*i_2 + 0x58))(i_2)
    i_2 = i
while (i != 0)
