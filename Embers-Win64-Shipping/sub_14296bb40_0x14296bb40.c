// 函数: sub_14296bb40
// 地址: 0x14296bb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* arg_20
sub_1428daf50(&arg_20, nullptr, nullptr, arg3)
int32_t rax = sub_1428a96d0(arg_20)
int64_t* i_2 = sub_142899e40(arg2, 0x208)
int64_t* i_1 = i_2

if (i_2 != 0)
    int64_t* i
    
    do
        int64_t* arg_10
        sub_142899cf0(i_1, 0x78, 0, &arg_10)
        int32_t rax_2 = sub_1406938b0(sub_142891580(arg_10))
        int32_t rax_4
        
        if (rax_2 != rax)
            rax_4 = opus_repacketizer_get_nb_frames(sub_142891580(arg_10))
        
        if (rax_2 == rax || rax_4 == rax)
            return sub_142891c70(arg1, arg_10)
        
        i = sub_142899e40(sub_14289a660(i_1), 0x208)
        i_1 = i
    while (i != 0)

sub_1428a5670(0x2e, 0x73, 0x83, "crypto\cms\cms_lib.c", 0x144)
return 0
