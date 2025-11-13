// 函数: sub_1408a0cf0
// 地址: 0x1408a0cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi = arg2

if (((arg1[0x13].d u>> 1).b & 1) != 0 && *arg1[8] == 0)
    (*(*arg1 + 0xb8))()

if (rdi != 0xffff)
    if (((arg1[0x13].d u>> 1).b & 1) == 0)
        bool cond:1_1 = arg1[0xe].b != 1
        int16_t arg_10 = rdi
        
        if (not(cond:1_1))
            int16_t* var_18_1 = &arg_10
            sub_140af98a0(
                "D:"
            "/Projects/Unreal/Embers/Plugins/UEVideoRecorder/Source/UEVideoRecorder/Private/VideoRecordGameViewportClient."
            "cpp", 
                0x87, %.*ls", 1)
            int16_t* var_10_1 = &arg_10
            var_18_1.d = 1
            sub_140aeb290(&data_1437020ab, 
                "D:"
            "/Projects/Unreal/Embers/Plugins/UEVideoRecorder/Source/UEVideoRecorder/Private/VideoRecordGameViewportClient."
            "cpp", 
                0x89, %.*ls")
    else
        int16_t* r8_1 = *arg1[8]
        
        if (r8_1 == &r8_1[sx.q(*arg1[0xb])])
            sub_1408a11b0(arg1)
            r8_1 = *arg1[8]
            
            if (r8_1 == &r8_1[sx.q(*arg1[0xb])])
                return 0xffff
        
        *r8_1 = rdi
        int32_t* rax_10 = arg1[0xb]
        *rax_10 -= 1
        int64_t* rax_11 = arg1[8]
        *rax_11 += 2

if (rdi == 0xffff)
    rdi = 0

return zx.q(rdi)
