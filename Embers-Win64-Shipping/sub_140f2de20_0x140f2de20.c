// 函数: sub_140f2de20
// 地址: 0x140f2de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140f488d0(arg1, arg3)

if (arg1[0x6f].d == 0)
    arg1[0x6d].d = arg2.d
    *(arg1 + 0x36c) = 1
else
    int64_t* rcx = arg1[0x6e]
    char rax_2
    
    if (rcx != 0)
        rax_2 = (*(*rcx + 0x28))(rcx)
    
    if (rcx == 0 || rax_2 == 0)
        if (arg1[0x6f].d == 0)
            arg1[0x6d].d = arg2.d
            *(arg1 + 0x36c) = 1
        else
            int64_t* rcx_1 = arg1[0x6e]
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x38))(rcx_1, 0)
                int64_t rcx_2 = arg1[0x6e]
                
                if (rcx_2 != 0)
                    arg1[0x6e] = sub_140a84c80(rcx_2, 0, 0)
                
                arg1[0x6f].d = 0
            
            arg1[0x6d].d = arg2.d
            *(arg1 + 0x36c) = 1

sub_140e19ef0(arg1, 2)
int512_t zmm1
zmm1.o = arg2
return sub_140f44620(&arg1[0x7f], zmm1) __tailcall
