// 函数: sub_141c721c0
// 地址: 0x141c721c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

if ((*(arg1 + 0x359) & 2) != 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    int32_t var_28_1 = 0xffffffff
    sub_140d3cc80(sub_1425a1cd0(), &var_38, 1, 0x10, 0)
    int32_t rdx_2 = var_30_1
    int32_t i = var_28_1 + 1
    int64_t r8_2 = var_38
    int32_t i_3 = i
    
    if (i s< rdx_2)
        while (*(r8_2 + (sx.q(i) << 3)) == 0)
            int32_t i_4 = i + 1
            i_3 = i_4
            i = i_4
            
            if (i_4 s>= rdx_2)
                break
    
    while (i s>= 0)
        if (i s>= rdx_2)
            break
        
        (*(*arg1 + 0x60))(arg1, *(r8_2 + (sx.q(i) << 3)))
        rdx_2 = var_30_1
        i = i_3 + 1
        r8_2 = var_38
        i_3 = i
        
        if (i s< rdx_2)
            while (*(r8_2 + (sx.q(i) << 3)) == 0)
                int32_t i_5 = i + 1
                i_3 = i_5
                i = i_5
                
                if (i_5 s>= rdx_2)
                    break
    
    if (r8_2 != 0)
        sub_140a74f90(r8_2)

if (arg1[0xfe] != 0)
    sub_141c738c0(arg1[0x152])
    int64_t* rcx_7 = arg1[0xfe] + 0x10
    (*(*rcx_7 + 8))(rcx_7)
    int64_t* rcx_8 = arg1[0xfe]
    (*(*rcx_8 + 0xa8))(rcx_8)
    int64_t* rcx_9 = arg1[0xfe]
    (*(*rcx_9 + 0x98))(rcx_9)
    int64_t* rcx_10 = arg1[0xfe]
    (*(*rcx_10 + 0x50))(rcx_10)

int32_t rax_9 = *(arg1 + 0x7ec)
void* rsi = arg1[0xfc]
int32_t i_6 = arg1[0xfd].d

if (rax_9 s< 0)
    if (i_6 != 0)
        void* rsi_2 = rsi + 8
        int32_t i_1
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_16 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x10
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        rax_9 = *(arg1 + 0x7ec)
    
    arg1[0xfd].d = 0
    
    if (rax_9 != 0)
        sub_1405a5410(&arg1[0xfc], 0)
else
    if (i_6 != 0)
        int64_t* rsi_1 = rsi + 8
        int32_t i_2
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_12 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    arg1[0xfd].d = 0

return sub_141c6cbd0(&arg1[0x130]) __tailcall
