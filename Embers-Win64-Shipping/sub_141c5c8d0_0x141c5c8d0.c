// 函数: sub_141c5c8d0
// 地址: 0x141c5c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 != 0)
    result = arg1->__offset(0xf0).d

if (arg2 == 0 || result != arg1->__offset(0x11c).d)
    if (arg1->__offset(0x1b8).d s<= 0 || data_143a13c10 != 0)
        return sub_141c5cac0(arg1, arg2, 0, arg1->__offset(0x1ac).d) __tailcall
    
    result = arg1->__offset(0x140).d
    int32_t rsi_1 = 0
    
    if (result s> 0)
        int64_t* r14_1 = nullptr
        
        do
            *(*(r14_1 + arg1->__offset(0x138).q) + 0x18) = arg2
            int64_t rcx_1 = data_143db7ac8
            void* rbx_1 = *(r14_1 + arg1->__offset(0x138).q)
            *(rbx_1 + 0x20) += 1
            *(rbx_1 + 0x30) = rcx_1
            void*** rcx_2 = *(rbx_1 + 0x28)
            
            if (rcx_1 == 0)
                sub_140a4fc50(rcx_2)
                *(rbx_1 + 0x28) = 0
                sub_141c5cac0(*(rbx_1 + 8), *(rbx_1 + 0x18), *(rbx_1 + 0x10), *(rbx_1 + 0x14))
                *(rbx_1 + 0x20) -= 1
            else
                if (rcx_2 == 0)
                    rcx_2.b = 1
                    void*** rax_3 = sub_140a491d0(rcx_2.b)
                    *(rbx_1 + 0x28) = rax_3
                    rcx_2 = rax_3
                
                (*rcx_2)[3](rcx_2)
                int64_t* rcx_3 = *(rbx_1 + 0x30)
                (*(*rcx_3 + 0x10))(rcx_3, rbx_1)
            
            result = arg1->__offset(0x140).d
            rsi_1 += 1
            r14_1 = &r14_1[1]
        while (rsi_1 s< result)
    
    int32_t i = 0
    
    if (result s> 0)
        int64_t* r14_2 = nullptr
        
        do
            void* rbx_3 = *(r14_2 + arg1->__offset(0x138).q)
            int64_t* rcx_5 = *(rbx_3 + 0x30)
            
            if (rcx_5 == 0)
                result = 0
                bool z_1
                
                if (0 == *(rbx_3 + 0x20))
                    *(rbx_3 + 0x20) = 0
                    z_1 = true
                else
                    result = *(rbx_3 + 0x20)
                    z_1 = false
                
                if (not(z_1))
                    result = sub_141c5cac0(*(rbx_3 + 8), *(rbx_3 + 0x18), *(rbx_3 + 0x10), 
                        *(rbx_3 + 0x14))
                    *(rbx_3 + 0x20) -= 1
                
                goto label_141c5ca52
            
            result = (*(*rcx_5 + 0x18))(rcx_5, rbx_3)
            
            if (result.b == 0)
            label_141c5ca52:
                
                if (*(rbx_3 + 0x30) != 0)
                    int64_t* rcx_9 = *(rbx_3 + 0x28)
                    result = (*(*rcx_9 + 0x20))(rcx_9, 0xffffffff, 0)
                    *(rbx_3 + 0x30) = 0
            else
                result =
                    sub_141c5cac0(*(rbx_3 + 8), *(rbx_3 + 0x18), *(rbx_3 + 0x10), *(rbx_3 + 0x14))
                *(rbx_3 + 0x20) -= 1
                int64_t* rcx_7 = *(rbx_3 + 0x28)
                
                if (rcx_7 != 0)
                    result = (*(*rcx_7 + 0x10))(rcx_7)
                
                *(rbx_3 + 0x30) = 0
            
            i += 1
            r14_2 = &r14_2[1]
        while (i s< arg1->__offset(0x140).d)

return result
