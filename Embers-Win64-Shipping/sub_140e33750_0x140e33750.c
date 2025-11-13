// 函数: sub_140e33750
// 地址: 0x140e33750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e33560(arg1, arg2, arg3).b != 0 && arg1[5] s> 8)
    int64_t var_10 = *arg1[4]
    
    if (png_sig_cmp(&var_10, 0, 8) == 0)
        EnterCriticalSection(&data_143e29b08)
        void* rax_2 = png_create_read_struct_2("1.5.2", arg1, sub_140e448c0, sub_140e44ad0, 0, 
            sub_140e44a40, sub_140b07c20)
        void* var_18 = rax_2
        int32_t* rax_3 = png_create_info_struct(rax_2)
        void* rcx_2 = var_18
        int32_t* arg_20 = rax_3
        png_set_read_fn(rcx_2, arg1, sub_140e44a50)
        png_read_info(var_18, arg_20)
        int32_t* rdx_4 = arg_20
        *(arg1 + 0x3c) = *rdx_4
        arg1[8].d = rdx_4[1]
        uint32_t r8 = zx.d(*(rdx_4 + 0x25))
        arg1[0xd].d = r8
        r8.b = not.b(r8.b)
        r8.b &= 2
        *(arg1 + 0x3b) = rdx_4[9].b
        char rax_7 = *(rdx_4 + 0x29)
        *(arg1 + 0x3a) = r8.b
        *(arg1 + 0x6c) = rax_7
        png_destroy_read_struct(&var_18, &arg_20, nullptr)
        LeaveCriticalSection(&data_143e29b08)
        int64_t rax_8
        rax_8.b = 1
        return rax_8

int32_t rax
rax.b = 0
return rax
