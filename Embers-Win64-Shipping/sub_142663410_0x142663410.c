// 函数: sub_142663410
// 地址: 0x142663410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int64_t rcx = data_143f5b298
int64_t var_38 = *arg3
void* rdi = arg4
int64_t var_28 = 0
void* rax_1 = sub_1423de540(rcx, arg2, 1)

if (rax_1 != 0)
    int64_t* rsi_1 = *(rax_1 + 0x120)
    
    if (rsi_1 != 0)
        void* rax_2 = sub_14269bba0()
        void* rdx = rsi_1[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            if (rdi != 0)
            label_1426634d7:
                int128_t* rbx_1 = arg6
                int64_t r14
                
                if (_mm_and_ps(*rbx_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                    r14.b = 0
                else if (_mm_and_ps(*(rbx_1 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
                    r14.b = 0
                else if (_mm_and_ps(*(rbx_1 + 8), 0x7fffffff)[0] f> 9.99999975e-05f)
                    r14.b = 0
                else
                    r14.b = 1
                
                void var_48
                int64_t* rax_6 = sub_14265ad90(&var_48, rdi, arg2, arg5)
                
                if (r14.b != 0)
                    rbx_1 = &data_143dbb1f8
                
                sub_142663310(rsi_1, arg3, &var_38, rbx_1, rdi, rax_6)
            else
                void* rax_5 = sub_142657070(rsi_1, 0)
                rdi = rax_5
                
                if (rax_5 != 0)
                    goto label_1426634d7

*arg1 = var_38
arg1[1].d = rax
return arg1
