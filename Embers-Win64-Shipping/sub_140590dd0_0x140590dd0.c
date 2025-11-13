// 函数: sub_140590dd0
// 地址: 0x140590dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    std::wostream::operator<<(
        sub_140593a10(std::wcerr, "Stopping video record without matched start."), sub_140593eb0)

if (arg2[7] == 0)
    return 

int64_t rax_2 = arg2[5]
arg2[5] = 0
int64_t arg_8

if (rax_2 != 0)
    arg_8 = rax_2
    av_frame_free(&arg_8)

char rax_3
uint64_t rbx = zx.q(rax_3)
int32_t rax_4 = av_write_trailer(arg2[7])

if (rax_4 s< 0)
    void** rax_5 = sub_140593a10(std::wcerr, "Fail to write video stream trailer: ")
    rbx = *arg2
    av_strerror(zx.q(rax_4), rbx, 0x40)
    std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_5, rbx), 0x2e), sub_140593eb0)
    rbx.b = 0

int32_t rax_8 = avio_closep(arg2[7] + 0x20)

if (rax_8 s< 0)
    void** rax_9 = sub_140593a10(std::wcerr, "Fail to flush trailing video data to file: ")
    rbx = *arg2
    av_strerror(zx.q(rax_8), rbx, 0x40)
    std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_9, rbx), 0x2e), sub_140593eb0)
    rbx.b = 0

int64_t rax_12 = arg2[1]
arg2[1] = 0

if (rax_12 != 0)
    arg_8 = rax_12
    avcodec_free_context(&arg_8)

int64_t rax_13 = arg2[5]
arg2[5] = 0

if (rax_13 != 0)
    arg_8 = rax_13
    av_frame_free(&arg_8)

int64_t rax_14 = arg2[7]

if (rax_14 != 0 && *(rax_14 + 0x20) != 0)
    avio_closep(rax_14 + 0x20)

int64_t rcx_20 = arg2[7]
arg2[7] = 0

if (rcx_20 != 0)
    avformat_free_context(rcx_20)

*(arg2 + 0x149) = 0
class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> >* const rcx_21
char* rdx_6

if (rbx.b == 0)
    rcx_21 = std::wcerr
    rdx_6 = "Fail to record video."
else
    rcx_21 = std::wclog
    rdx_6 = "Video has been recorded."

return std::wostream::operator<<(sub_140593a10(rcx_21, rdx_6), sub_140593eb0) __tailcall
