// 函数: sub_1411e9190
// 地址: 0x1411e9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg3[1].d s<= 0 || *(**arg3 + 0x10) != 3)
    rbx.b = 0
else
    rbx.b = 1

if (sub_141191440((*U"1111")[sx.q(*(arg2 + 8))]) != 0 && rbx.b != 0)
    int32_t rax_4 = *(arg2 + 8)
    void var_48
    int64_t* rax_5 = sub_141187d50(&var_48, arg1, arg2, arg3)
    
    if (arg5 + 0x10 != rax_5)
        int32_t i_1 = *(arg5 + 0x18)
        
        if (i_1 != 0)
            void* rbx_2 = *(arg5 + 0x10) + 0x40
            int32_t i
            
            do
                int64_t* rcx_2 = *(rbx_2 + 0xe8)
                
                if (rcx_2 != 0)
                    sub_1411e8d60(rcx_2)
                
                sub_1410ebc60(rbx_2)
                sub_1405ec8a0(rbx_2 - 8)
                int64_t* rcx_5 = *(rbx_2 - 0x10)
                
                if (rcx_5 != 0)
                    sub_1411e8d60(rcx_5)
                
                int64_t* rcx_6 = *(rbx_2 - 0x18)
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x38))(rcx_6)
                
                int64_t* rcx_7 = *(rbx_2 - 0x20)
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x38))(rcx_7)
                
                rbx_2 += 0x130
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(arg5 + 0x10) = *rax_5
        *rax_5 = 0
        *(arg5 + 0x18) = rax_5[1].d
        *(arg5 + 0x1c) = *(rax_5 + 0xc)
        rax_5[1] = 0
    
    sub_1410eb260(&var_48)
    int16_t arg_10 = 1
    sub_141185140(arg1, std::_Get_future_error_what((*U"1111")[sx.q(rax_4)]), arg3, &arg_10, arg4)
    sub_1411054e0()
    sub_1411fcc60(arg1, arg2, arg3, arg5 + 0x10)
    sub_141196e50(arg1, arg2, arg3, arg5 + 0x10)
    sub_1411054e0()

return sub_1411c8f60(arg4) __tailcall
