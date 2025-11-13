// 函数: sub_14228aa60
// 地址: 0x14228aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[1]
int64_t rcx = *rdx
bool cond:2

if (rcx + 4 u> rdx[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    int32_t arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    cond:2 = arg_8 != 0
else
    cond:2 = *rcx != 0
    *rdx = rcx + 4

if (cond:2 != 0)
    void*** rbx_1
    
    if ((arg1[5].b & 1) == 0)
        rbx_1 = *arg2
    else
        void*** rax_4 = j_sub_140a82f30(0x3b8)
        rbx_1 = rax_4
        
        if (rax_4 == 0)
            rbx_1 = nullptr
            *arg2 = nullptr
        else
            rax_4[1].d = 0xffffffff
            *(rax_4 + 0xc) = 4
            *rbx_1 = &data_143314f68
            *(rbx_1 + 0x1c) = data_143dbb1f8.q
            int32_t rax_5 = data_143dbb200
            *(rbx_1 + 0x24) = rax_5
            rbx_1[2] = *(rbx_1 + 0x1c)
            rbx_1[3].d = rax_5
            rbx_1[5].b = 0
            *(rbx_1 + 0x2c) = 1
            rbx_1[6] = 0
            rbx_1[7].d = 0
            rbx_1[8] = &data_143314ec0
            __builtin_memset(&rbx_1[9], 0, 0x29)
            rbx_1[0xf] = 0
            rbx_1[0x10] = 0
            sub_142289220(&rbx_1[0x11])
            rbx_1[0x5f] = 0
            void* rcx_3 = &rbx_1[0x71]
            rbx_1[0x60] = 0
            rbx_1[0x5e] = &data_143314ee8
            rbx_1[0x61].b = 0
            rbx_1[0x63] = 0
            rbx_1[0x64] = 0
            rbx_1[0x62] = &data_143314f28
            rbx_1[0x65].b = 0
            __builtin_memset(&rbx_1[0x66], 0, 0x24)
            __builtin_memset(&rbx_1[0x6b], 0, 0x30)
            *(rcx_3 + 0x10) = 0
            *(rcx_3 + 0x18) = 0
            *(rcx_3 + 0x1c) = 0x80
            void* rax_6 = *(rcx_3 + 0x10)
            
            if (rax_6 != 0)
                rcx_3 = rax_6
            
            *rcx_3 = 0
            *(rcx_3 + 8) = 0
            rbx_1[0x75].d = 0xffffffff
            *(rbx_1 + 0x3ac) = 0
            rbx_1[0x76].d = 0xffffffff
            *arg2 = rbx_1
    
    sub_14228cba0(arg1, rbx_1, arg3)

return arg1
